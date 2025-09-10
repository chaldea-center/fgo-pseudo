void ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27D83 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27D83 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantVoiceEntity__CreatePK(int32_t id, int32_t voicePrefix, int32_t type, const MethodInfo *method)
{
  if ( (byte_4C27D62 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27D62 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v7; // x2
  __int64 v8; // x9
  unsigned __int64 v9; // x10
  struct SvtVoiceInfo_array *scriptJson; // x10
  int max_length; // w11
  int i; // w12
  SvtVoiceInfo_o *v13; // x13
  struct ServantVoiceCond_array *conds; // x13
  il2cpp_array_size_t v15; // x14
  int v16; // w15
  ServantVoiceCond_o *v17; // x16
  __int64 value; // x16

  if ( (byte_4C27D6F & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C27D6F = 1;
  }
  v5 = sub_1C2D538(int___TypeInfo, (unsigned int)rankNow);
  if ( !v5 )
    goto LABEL_31;
  v8 = *(_QWORD *)(v5 + 24);
  if ( (__int64)((unsigned __int64)(unsigned int)v8 << 32) >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)v8 )
LABEL_32:
        sub_1C2D6F4(v5, v6, v7);
      *(_DWORD *)(v5 + 32 + 4 * v9++) = 0;
    }
    while ( (int)v8 != v9 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1C2D6EC(v5, v6);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    goto LABEL_28;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
      goto LABEL_32;
    v13 = scriptJson->m_Items[i];
    if ( !v13 )
      goto LABEL_31;
    conds = v13->fields.conds;
    if ( conds )
    {
      v15 = conds->max_length;
      if ( v15 )
      {
        if ( (int)v15 >= 1 )
        {
          v16 = 0;
          do
          {
            v17 = conds->m_Items[v16];
            if ( !v17 )
              goto LABEL_31;
            if ( v17->fields.condType == 3 )
            {
              value = v17->fields.value;
              if ( (_DWORD)value == rankNow )
                return rankNow;
              if ( (int)value < rankNow )
              {
                if ( (unsigned int)value >= (unsigned int)v8 )
                  goto LABEL_32;
                ++*(_DWORD *)(v5 + 4 * value + 32);
              }
            }
          }
          while ( (_DWORD)v15 != ++v16 );
        }
      }
    }
  }
LABEL_28:
  while ( --rankNow >= 0 )
  {
    if ( rankNow >= (unsigned int)v8 )
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
    sub_1C2D6EC(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1C2D6F4(this, *(_QWORD *)&type, labelName);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_63493168(labelName, v12->fields.id, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return v8->fields.boxGachaPriority;
    v10 = infos->max_length;
    if ( (int)++v11 >= v10 )
      goto LABEL_15;
  }
}


int32_t ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  int max_length; // w9
  unsigned int v5; // w10
  SvtVoiceInfo_o *v6; // x11
  struct ServantVoiceCond_array *conds; // x11
  il2cpp_array_size_t v8; // x12
  ServantVoiceCond_o *v9; // x13
  int v10; // w13
  ServantVoiceCond_o *v11; // x14

  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1C2D6EC(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    this = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
LABEL_24:
        sub_1C2D6F4(this, method, v2);
      v6 = scriptJson->m_Items[v5];
      if ( !v6 )
        goto LABEL_23;
      conds = v6->fields.conds;
      if ( conds )
      {
        v8 = conds->max_length;
        if ( v8 )
        {
          if ( !(_DWORD)v8 )
            goto LABEL_24;
          v9 = conds->m_Items[0];
          if ( !v9 )
            goto LABEL_23;
          if ( v9->fields.condType == 11 )
          {
            if ( (_DWORD)v8 == 1 )
              return (int)this;
            if ( (int)v8 >= 1 )
            {
              v10 = 0;
              while ( 1 )
              {
                v11 = conds->m_Items[v10];
                if ( !v11 )
                  goto LABEL_23;
                if ( v11->fields.condType == 20 )
                  break;
                if ( (_DWORD)v8 == ++v10 )
                  goto LABEL_19;
              }
              this = (ServantVoiceEntity_o *)(unsigned int)v11->fields.value;
            }
          }
        }
      }
LABEL_19:
      if ( (int)++v5 >= max_length )
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
    return ServantVoiceEntity__getVoiceList_42565096(this, 3, labelName, 0, 1, v5);
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
  __int64 v7; // x2
  SvtVoiceInfo_o *v8; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v10; // x22
  unsigned __int64 max_length_low; // x9
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v13; // x8

  IsNullOrEmpty = System_String__IsNullOrEmpty(playVoiceLabel, 0);
  v8 = 0;
  if ( !IsNullOrEmpty )
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
LABEL_13:
      sub_1C2D6EC(IsNullOrEmpty, v6);
    v10 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(scriptJson->max_length);
      if ( (__int64)v10 >= (int)max_length_low )
        return 0;
      if ( v10 >= max_length_low )
        sub_1C2D6F4(IsNullOrEmpty, v6, v7);
      v8 = scriptJson->m_Items[v10];
      if ( v8 )
      {
        infos = v8->fields.infos;
        if ( !infos )
          goto LABEL_13;
        if ( SLODWORD(infos->max_length) >= 1 )
        {
          v13 = infos->m_Items[0];
          if ( !v13 )
            goto LABEL_13;
          IsNullOrEmpty = System_String__op_Equality(v13->fields.id, playVoiceLabel, 0);
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


System_String_o *ServantVoiceEntity__GetSummonScriptId(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v9; // x21
  __int64 v10; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v14; // x9
  System_String_o *summonScript; // x22

  if ( (byte_4C27D82 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D82 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(Instance, v6);
  }
  v9 = (VoicePlayCondMaster_o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return 0;
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_19;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_16;
    infos = v12->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !LODWORD(infos->max_length) )
LABEL_19:
      sub_1C2D6F4(Instance, v6, v7);
    v14 = infos->m_Items[0];
    if ( !v14 || !v9 )
      goto LABEL_16;
    summonScript = v12->fields.summonScript;
    Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v9, svtId, v14->fields.id, 0, -1, -1, 0, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (Il2CppObject *)System_String__IsNullOrEmpty(summonScript, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v10;
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

  if ( (byte_4C27D78 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantVoiceEntity_o *)sub_1C2D490(&VoiceCondType_TypeInfo);
    byte_4C27D78 = 1;
  }
  if ( !cond )
LABEL_45:
    sub_1C2D6EC(this, cond);
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
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v31, 0);
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

  return ServantVoiceEntity__getVoiceList_42565096(this, 6, labelName, 0, 1, v3);
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  unsigned int v11; // w23
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v13; // x28
  struct ServantVoiceCond_array *conds; // x29
  il2cpp_array_size_t v15; // x8
  __int64 v16; // x19
  ServantVoiceCond_o *v17; // x27
  unsigned int condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C27D79 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D79 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_36:
    sub_1C2D6EC(Instance, p_obj);
  }
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v11 >= max_length )
      goto LABEL_38;
    v13 = scriptJson->m_Items[v11];
    if ( !v13 )
      goto LABEL_36;
    conds = v13->fields.conds;
    if ( conds && (v15 = conds->max_length) != 0 )
    {
      if ( (int)v15 >= 1 )
      {
        v16 = 0;
        while ( (unsigned int)v16 < (unsigned int)v15 )
        {
          v17 = conds->m_Items[v16];
          if ( !v17 || !v10 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v10,
                                       &entity,
                                       v17->fields.value,
                                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_36;
            if ( Time <= (__int64)entity[6].monitor )
            {
              condType = v17->fields.condType;
              if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
              {
                if ( !v3 )
                  goto LABEL_36;
                p_obj = &v13->fields.infos->obj;
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
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                }
                else
                {
                  v22 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v22[4] = (Il2CppClass *)p_obj;
                  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)p_obj, v7, v8);
                }
              }
            }
          }
          LODWORD(v15) = conds->max_length;
          if ( (int)++v16 >= (int)v15 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C2D6F4(Instance, p_obj, v7);
      }
    }
    else
    {
      if ( !v3 )
        goto LABEL_36;
      p_obj = &v13->fields.infos->obj;
      v23 = v3->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v3->fields._version;
      if ( !v23 )
        goto LABEL_36;
      v25 = v3->fields._size;
      if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          p_obj,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &v23->obj.klass + v25;
        v3->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)p_obj;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)p_obj, v7, v8);
      }
    }
LABEL_35:
    ++v11;
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
  __int64 v10; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v12; // x22
  __int64 v13; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v15; // x8
  struct ServantVoiceData_array *infos; // x23
  ServantVoiceData_o *v17; // x8
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4C27D65 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D65 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_22:
    sub_1C2D6EC(Instance, v9);
  }
  v12 = (VoicePlayCondMaster_o *)Instance;
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v13 >= max_length )
      goto LABEL_25;
    v15 = scriptJson->m_Items[v13];
    if ( v15 )
    {
      infos = v15->fields.infos;
      if ( infos )
      {
        if ( !LODWORD(infos->max_length) )
LABEL_25:
          sub_1C2D6F4(Instance, v9, v10);
        v17 = infos->m_Items[0];
        if ( v17 )
        {
          if ( v12 )
          {
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v12, svtId, v17->fields.id, 0, -1, -1, 0, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_22;
              Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                           v7,
                                           &infos->obj,
                                           (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                items = v7->fields._items;
                v20 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v7->fields._version;
                if ( !items )
                  goto LABEL_22;
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    &infos->obj,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                }
                else
                {
                  v22 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v22[4] = (Il2CppClass *)infos;
                  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)infos, v10, v18);
                }
              }
            }
            scriptJson = this->fields.scriptJson;
            ++v13;
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v13; // x22
  int max_length; // w9
  _QWORD *monitor; // x8
  __int64 v16; // x9
  __int64 v17; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C27D67 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D67 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_21:
    sub_1C2D6EC(Instance, v9);
  }
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v7;
    if ( (unsigned int)v13 >= max_length )
      goto LABEL_24;
    v9 = (Il2CppObject *)scriptJson->m_Items[v13];
    if ( !v9 )
      goto LABEL_21;
    monitor = v9[4].monitor;
    if ( monitor )
    {
      v16 = monitor[3];
      if ( v16 )
      {
        if ( !(_DWORD)v16 )
LABEL_24:
          sub_1C2D6F4(Instance, v9, v10);
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
              v9,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v9;
            sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v9, v10, v11);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v13;
    if ( !scriptJson )
      goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceCond_array *ServantVoiceEntity__getConds(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v6; // x20
  __int64 v7; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v10; // x8
  unsigned int v12; // w21
  unsigned int v13; // w9
  SvtVoiceInfo_o *v14; // x22
  struct ServantVoiceData_array *infos; // x23
  int v16; // w9
  __int64 v17; // x24
  ServantVoiceData_o *v18; // x8

  v6 = this;
  if ( (byte_4C27D6C & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_1C2D490(&StringLiteral_16126/*"_B050"*/);
    byte_4C27D6C = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16126/*"_B050"*/, 0);
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
          sub_1C2D6F4(this, *(_QWORD *)&type, v7);
        v10 = scriptJson->m_Items[0];
        if ( v10 )
          return v10->fields.conds;
LABEL_25:
        sub_1C2D6EC(this, *(_QWORD *)&type);
      }
    }
    else
    {
      if ( !scriptJson )
        goto LABEL_25;
      v12 = 0;
      while ( 1 )
      {
        v13 = scriptJson->max_length;
        if ( (int)v12 >= (int)v13 )
          break;
        if ( v12 >= v13 )
          goto LABEL_28;
        v14 = scriptJson->m_Items[v12];
        if ( !v14 )
          goto LABEL_25;
        infos = v14->fields.infos;
        if ( infos )
        {
          v16 = infos->max_length;
          if ( v16 >= 1 )
          {
            v17 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v17 >= v16 )
                goto LABEL_28;
              v18 = infos->m_Items[v17];
              if ( !v18 )
                goto LABEL_25;
              this = (ServantVoiceEntity_o *)System_String__Equals_63493168(labelName, v18->fields.id, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
                return v14->fields.conds;
              v16 = infos->max_length;
              if ( (int)++v17 >= v16 )
              {
                scriptJson = v6->fields.scriptJson;
                break;
              }
            }
          }
        }
        ++v12;
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

  return ServantVoiceEntity__getVoiceList_42564368(this, 2, 23, costumeId, 0, genderType, v4);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantVoiceEntity__getVoiceList_42564368(this, 2, 23, costumeId, playVoiceLabel, -1, v4);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v9; // w21
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceCond_array *conds; // x24
  il2cpp_array_size_t v13; // x9
  __int64 v14; // x25
  ServantVoiceCond_o *v15; // x8
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C27D7B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C27D7B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1C2D6EC(v4, p_obj);
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v9 >= max_length )
LABEL_25:
      sub_1C2D6F4(v4, p_obj, v6);
    v11 = scriptJson->m_Items[v9];
    if ( v11 )
    {
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
              if ( (unsigned int)v14 >= (unsigned int)v13 )
                goto LABEL_25;
              v15 = conds->m_Items[v14];
              if ( !v15 )
                goto LABEL_23;
              if ( v15->fields.condType == 15 )
              {
                if ( !v3 )
                  goto LABEL_23;
                p_obj = &v11->fields.infos->obj;
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
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                }
                else
                {
                  v19 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v19[4] = (Il2CppClass *)p_obj;
                  sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), (int32_t)p_obj, v6, v7);
                }
              }
              LODWORD(v13) = conds->max_length;
              ++v14;
            }
            while ( (int)v14 < (int)v13 );
            scriptJson = this->fields.scriptJson;
          }
        }
      }
      ++v9;
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
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v8; // x21
  unsigned int v9; // w22
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v11; // x27
  struct ServantVoiceCond_array *conds; // x28
  il2cpp_array_size_t v13; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v15; // x23
  int32_t condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C27D7A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D7A = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (DataManager_o *)NetworkManager__getTime(0);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1C2D6EC(Time, p_obj);
  v8 = Time;
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v2;
    if ( v9 >= max_length )
LABEL_40:
      sub_1C2D6F4(Time, p_obj, v5);
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_38;
    conds = v11->fields.conds;
    if ( conds && (v13 = conds->max_length) != 0 )
    {
      if ( (int)v13 >= 1 )
      {
        for ( i = 0; (int)i < (int)v13; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v13 )
            goto LABEL_40;
          v15 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v15 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v15->fields.value,
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v15->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v8 )
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
            p_obj = &v11->fields.infos->obj;
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
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v2->fields._size = size + 1;
              v20[4] = (Il2CppClass *)p_obj;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)p_obj, v5, v6);
            }
          }
LABEL_30:
          LODWORD(v13) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v2 )
        goto LABEL_38;
      p_obj = &v11->fields.infos->obj;
      v21 = v2->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v2->fields._version;
      if ( !v21 )
        goto LABEL_38;
      v23 = v2->fields._size;
      if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          p_obj,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &v21->obj.klass + v23;
        v2->fields._size = v23 + 1;
        v24[4] = (Il2CppClass *)p_obj;
        sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)p_obj, v5, v6);
      }
    }
    ++v9;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventRewardVoiceList_42576044(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_42565096(this, 5, labelName, 0, 1, v3);
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
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v22; // w21
  unsigned int max_length; // w9
  Il2CppObject *v24; // x27
  _BOOL4 v25; // w24
  _QWORD *monitor; // x26
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x20
  int32_t v30; // w28
  int64_t v31; // x29
  int v32; // w8
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  Il2CppObject *current; // x19
  _DWORD *v42; // x20
  int v43; // w8
  unsigned int v44; // w21
  __int64 v45; // x8
  Il2CppObject *klass; // x1
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_List_object__o *v52; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v53; // [xsp+10h] [xbp-C0h]
  int64_t v54; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v57; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_4C27D81 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D81 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v52 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v7 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v7 )
    goto LABEL_54;
  items = v7->fields._items;
  v11 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v7->fields._size;
  v57 = v7;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      14,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 19;
  }
  v15 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v15,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
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
        *(const MethodInfo_376F38C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = v18 + 1;
      *((_DWORD *)v16->m_Items + v18) = checkCondType;
    }
  }
  v53 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v54 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_54;
  v22 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v22 >= (int)max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_78;
    v24 = (Il2CppObject *)scriptJson->m_Items[v22];
    if ( !v24 )
      goto LABEL_54;
    v25 = v6;
    monitor = v24[4].monitor;
    if ( monitor )
    {
      v27 = monitor[3];
      if ( v27 )
      {
        if ( (int)v27 >= 1 )
        {
          v28 = 0;
          while ( (unsigned int)v28 < (unsigned int)v27 )
          {
            v29 = monitor[v28 + 4];
            if ( !v29 )
              goto LABEL_54;
            v30 = *(_DWORD *)(v29 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v57,
                     v30,
                     (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v15 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v15,
                       v30,
                       (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v29 + 20),
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v29 + 20) != eventId )
              goto LABEL_53;
            v31 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v57,
                     v30,
                     (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v32 = *(_QWORD *)(v31 + 96) <= v54 ? 13 : 14;
              if ( v30 == 19 )
                v32 = 19;
              if ( v30 != v32 )
                goto LABEL_53;
            }
            LODWORD(v27) = *((_DWORD *)monitor + 6);
            if ( (int)++v28 >= (int)v27 )
              goto LABEL_48;
          }
LABEL_78:
          sub_1C2D6F4(Time, v9, v19);
        }
LABEL_48:
        if ( !v53 )
          goto LABEL_54;
        v33 = v53->fields._items;
        v34 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v53->fields._version;
        if ( !v33 )
          goto LABEL_54;
        v35 = v53->fields._size;
        if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            v24,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &v33->obj.klass + v35;
          v53->fields._size = v35 + 1;
          v36[4] = (Il2CppClass *)v24;
          sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v24, v19, v20);
        }
      }
    }
LABEL_53:
    ++v22;
    v6 = v25;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_54;
  }
  Time = (int64_t)v53;
  if ( !v53 )
LABEL_54:
    sub_1C2D6EC(Time, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v53,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v59 = v58;
LABEL_57:
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v37 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1C2D6EC(v37, v38);
    v42 = v59.fields._current[4].monitor;
    if ( !v42 )
      sub_1C2D6EC(v37, v38);
    v43 = v42[6];
    if ( v43 >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= v43 )
          sub_1C2D6F4(v37, v38, v39);
        v45 = *(_QWORD *)&v42[2 * v44 + 8];
        if ( !v45 )
          sub_1C2D6EC(v37, v38);
        if ( v6 )
          break;
        if ( !v15 )
          sub_1C2D6EC(v37, v38);
        v37 = System_Collections_Generic_List_Int32Enum___Contains(
                v15,
                *(_DWORD *)(v45 + 16),
                (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v37 )
          break;
        v43 = v42[6];
        if ( (int)++v44 >= v43 )
          goto LABEL_57;
      }
      if ( !v52 )
        sub_1C2D6EC(v37, v38);
      klass = (Il2CppObject *)current[4].klass;
      v47 = v52->fields._items;
      v48 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v52->fields._version;
      if ( !v47 )
        sub_1C2D6EC(v37, klass);
      v49 = v52->fields._size;
      if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          klass,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &v47->obj.klass + v49;
        v52->fields._size = v49 + 1;
        v50[4] = (Il2CppClass *)klass;
        sub_1C2D434((CGThumbnailListItem_o *)(v50 + 4), (int32_t)klass, v39, v40);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v52;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventShopVoiceList_42578880(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_42565096(this, 9, labelName, 0, 1, v3);
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
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *current; // x20
  int monitor; // w8
  unsigned int v12; // w23
  __int64 v13; // x8
  System_String_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C27D7F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4C27D7F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_1C2D6EC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)EventRewardVoiceList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v17 = v16;
  do
  {
LABEL_5:
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v7 )
    {
      current = 0;
      goto LABEL_16;
    }
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C2D6EC(v7, v8);
    monitor = (int)v17.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= monitor )
      sub_1C2D6F4(v7, v8, v9);
    v13 = *((_QWORD *)&current[2].klass + (int)v12);
    if ( !v13 )
      sub_1C2D6EC(v7, v8);
    v14 = *(System_String_o **)(v13 + 16);
    if ( !v14 )
      sub_1C2D6EC(0, v8);
    v7 = System_String__Equals_63493168(v14, id, 0);
    if ( v7 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v12 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4C27D70 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4C27D70 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C2D6EC(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_42565096(
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
    return ServantVoiceEntity__getVoiceList_42565096(this, 2, labelName, 0, 0, v5);
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

  if ( (byte_4C27D71 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4C27D71 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C2D6EC(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_42565096(
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
  const MethodInfo *v7; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v9; // w21
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceCond_array *conds; // x24
  il2cpp_array_size_t v13; // x10
  __int64 v14; // x25
  char v15; // w27
  char v16; // w8
  char v17; // w9
  ServantVoiceCond_o *v18; // x10
  int32_t condType; // w11
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C27D7C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C27D7C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_34;
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v9 >= max_length )
LABEL_36:
      sub_1C2D6F4(isQuestClearState, p_obj, v6);
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_34;
    conds = v11->fields.conds;
    if ( conds )
    {
      v13 = conds->max_length;
      if ( v13 )
      {
        if ( (int)v13 >= 1 )
        {
          v14 = 0;
          v15 = 0;
          v16 = 0;
          v17 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v14 >= (unsigned int)v13 )
              goto LABEL_36;
            v18 = conds->m_Items[v14];
            if ( !v18 )
              goto LABEL_34;
            condType = v18->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v16 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v18->fields.value,
                                        v6);
                  if ( isQuestClearState )
                    goto LABEL_33;
                  v16 = 0;
                  goto LABEL_27;
                }
                if ( (v15 & 1) == 0 )
                  goto LABEL_33;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v18->fields.value,
                                      v6);
                if ( isQuestClearState )
                  goto LABEL_33;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v18->fields.value,
                                      v6);
                if ( !isQuestClearState )
                  goto LABEL_33;
                break;
              default:
                if ( (v17 & 1) == 0 )
                  goto LABEL_33;
                goto LABEL_27;
            }
            v15 = 1;
            v16 = 1;
LABEL_27:
            LODWORD(v13) = conds->max_length;
            ++v14;
            v17 = 1;
            if ( (int)v14 >= (int)v13 )
            {
              if ( v3 )
              {
                p_obj = &v11->fields.infos->obj;
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
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v23 = &items->obj.klass + size;
                    v3->fields._size = size + 1;
                    v23[4] = (Il2CppClass *)p_obj;
                    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)p_obj, (int32_t)v6, v7);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1C2D6EC(isQuestClearState, p_obj);
            }
          }
        }
      }
    }
LABEL_33:
    scriptJson = this->fields.scriptJson;
    ++v9;
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionVoiceList_42576556(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_42565096(this, 8, labelName, 0, 1, v3);
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
  __int64 v24; // x2
  const MethodInfo *v25; // x3
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
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  int32_t id; // w26
  int32_t v50; // w25

  if ( (byte_4C27D68 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&ServantLimitUpVoiceCache_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D68 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v15 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v14);
  v17 = v15 - 1;
  if ( v15 < 1 )
    goto LABEL_15;
  v18 = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
        v50 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v50, 0);
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
        p_obj,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v30[4] = (Il2CppClass *)p_obj;
      sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)p_obj, v24, v25);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
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
            sub_1C2D6F4(Instance, p_obj, v24);
          v39 = conds->m_Items[0];
          if ( !v39 )
            goto LABEL_72;
          if ( v39->fields.condType != 11 )
            goto LABEL_52;
          if ( v23 != -1 && (_DWORD)v38 != 1 )
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
                v43 = v41->fields.value <= v23;
              }
              else
              {
                if ( condType == 22 && v41->fields.value >= v23 && ((unsigned __int8)Instance & 1) != 0 )
                {
LABEL_54:
                  if ( v13 )
                  {
                    p_obj = &v34->fields.infos->obj;
                    v44 = v13->fields._items;
                    v45 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v13->fields._version;
                    if ( v44 )
                    {
                      v46 = v13->fields._size;
                      if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v13,
                          p_obj,
                          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v47 = &v44->obj.klass + v46;
                        v13->fields._size = v46 + 1;
                        v47[4] = (Il2CppClass *)p_obj;
                        sub_1C2D434((CGThumbnailListItem_o *)(v47 + 4), (int32_t)p_obj, v24, v25);
                      }
                      goto LABEL_52;
                    }
                  }
LABEL_72:
                  sub_1C2D6EC(Instance, p_obj);
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
          p_obj = &v34->fields.infos->obj;
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
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *current; // x20
  int monitor; // w8
  unsigned int v12; // w23
  __int64 v13; // x8
  System_String_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C27D80 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4C27D80 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1C2D6EC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v17 = v16;
  do
  {
LABEL_5:
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v7 )
    {
      current = 0;
      goto LABEL_16;
    }
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C2D6EC(v7, v8);
    monitor = (int)v17.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= monitor )
      sub_1C2D6F4(v7, v8, v9);
    v13 = *((_QWORD *)&current[2].klass + (int)v12);
    if ( !v13 )
      sub_1C2D6EC(v7, v8);
    v14 = *(System_String_o **)(v13 + 16);
    if ( !v14 )
      sub_1C2D6EC(0, v8);
    v7 = System_String__Equals_63493168(v14, id, 0);
    if ( v7 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v12 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v11; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v13; // w25
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v15; // x24
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v18; // x27
  int v19; // w9
  ServantVoiceCond_o *v20; // x8
  struct ServantVoiceData_array *v21; // x8
  ServantVoiceData_o *v22; // x8
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4C27D6E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D6E = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v10,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_34:
    sub_1C2D6EC(Instance, p_obj);
  }
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    if ( v13 >= max_length )
LABEL_37:
      sub_1C2D6F4(Instance, p_obj, v11);
    v15 = scriptJson->m_Items[v13];
    if ( v15 )
    {
      infos = v15->fields.infos;
      if ( infos && infos->max_length )
      {
        conds = v15->fields.conds;
        if ( !conds )
          goto LABEL_34;
        v18 = 0;
        while ( 1 )
        {
          v19 = conds->max_length;
          if ( (int)v18 >= v19 )
            break;
          if ( (unsigned int)v18 >= v19 )
            goto LABEL_37;
          v20 = conds->m_Items[v18];
          if ( !v20 )
            goto LABEL_34;
          if ( v20->fields.condType == 3 && v20->fields.value == friendShipRank )
          {
            v21 = v15->fields.infos;
            if ( !v21 )
              goto LABEL_34;
            if ( !LODWORD(v21->max_length) )
              goto LABEL_37;
            v22 = v21->m_Items[0];
            if ( !v22 || !MasterData_object )
              goto LABEL_34;
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         (VoicePlayCondMaster_o *)MasterData_object,
                                         this->fields.id,
                                         v22->fields.id,
                                         0,
                                         -1,
                                         -1,
                                         0,
                                         0,
                                         0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v15, imageLimitCount, 1, v23);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v10 )
                  goto LABEL_34;
                p_obj = &v15->fields.infos->obj;
                items = v10->fields._items;
                v26 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v10->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v10->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    p_obj,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                }
                else
                {
                  v28 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v28[4] = (Il2CppClass *)p_obj;
                  sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)p_obj, v11, v24);
                }
              }
            }
          }
          conds = v15->fields.conds;
          ++v18;
          if ( !conds )
            goto LABEL_34;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v13;
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
  __int64 v9; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v13; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v15; // x9
  ServantVoiceData_o *v16; // x8
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x4
  struct ServantVoiceCond_array *conds; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C27D6D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D6D = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(Instance, p_obj);
  }
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( (unsigned int)v11 >= max_length )
      goto LABEL_28;
    v13 = scriptJson->m_Items[v11];
    if ( !v13 )
      goto LABEL_25;
    infos = v13->fields.infos;
    if ( infos )
    {
      v15 = infos->max_length;
      if ( v15 )
      {
        if ( !(_DWORD)v15 )
LABEL_28:
          sub_1C2D6F4(Instance, p_obj, v9);
        v16 = infos->m_Items[0];
        if ( !v16 || !MasterData_object )
          goto LABEL_25;
        Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                     (VoicePlayCondMaster_o *)MasterData_object,
                                     this->fields.id,
                                     v16->fields.id,
                                     0,
                                     -1,
                                     -1,
                                     0,
                                     0,
                                     0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v13->fields.conds;
          if ( !conds )
            goto LABEL_25;
          if ( SLODWORD(conds->max_length) < 1
            || (Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                             this,
                                             v13,
                                             imageLimitCount,
                                             0,
                                             v18),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v8 )
              goto LABEL_25;
            p_obj = &v13->fields.infos->obj;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                p_obj,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)p_obj;
              sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)p_obj, v9, v17);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v11;
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

  return ServantVoiceEntity__getVoiceList_42565096(this, 7, labelName, 0, 1, v3);
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
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v28; // x24
  ServantVoiceCond_array *v29; // x1
  System_String_o *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_String_o *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w8
  unsigned int v37; // w28
  unsigned int v38; // w9
  SvtVoiceInfo_o *v39; // x26
  struct ServantVoiceData_array *infos; // x9
  __int64 v41; // x29
  int v42; // w8
  ServantVoiceData_o *v43; // x8
  const MethodInfo *v44; // x3
  ServantVoiceCond_array *v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *materialOverwriteName; // x1
  System_String_o *v49; // x1
  System_String_o *v50; // x1

  if ( (byte_4C27D6B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16126/*"_B050"*/);
    byte_4C27D6B = 1;
  }
  *conds = 0;
  sub_1C2D434((CGThumbnailListItem_o *)conds, 0, (int32_t)labelName, (const MethodInfo *)conds);
  *isInvalidVoiceList = 0;
  *overwriteName = 0;
  sub_1C2D434((CGThumbnailListItem_o *)overwriteName, 0, v18, v19);
  *overwriteNameDefault = 0;
  sub_1C2D434((CGThumbnailListItem_o *)overwriteNameDefault, 0, v20, v21);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v22 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16126/*"_B050"*/, 0);
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
        sub_1C2D6F4(v22, v23, v24);
      v28 = scriptJson->m_Items[0];
      if ( v28 )
      {
        v29 = v28->fields.conds;
        *conds = v29;
        sub_1C2D434((CGThumbnailListItem_o *)conds, (int32_t)v29, v24, v25);
        *isInvalidVoiceList = v28->fields.isInvalidVoiceList;
        v30 = v28->fields.overwriteName;
        *overwriteName = v30;
        sub_1C2D434((CGThumbnailListItem_o *)overwriteName, (int32_t)v30, v31, v32);
        v33 = v28->fields.overwriteNameDefault;
        *overwriteNameDefault = v33;
        sub_1C2D434((CGThumbnailListItem_o *)overwriteNameDefault, (int32_t)v33, v34, v35);
        v36 = v28->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1C2D6EC(v22, v23);
  }
  if ( !scriptJson )
    goto LABEL_26;
  v37 = 0;
  while ( 1 )
  {
    v38 = scriptJson->max_length;
    if ( (int)v37 >= (int)v38 )
      return;
    if ( v37 >= v38 )
      goto LABEL_33;
    v39 = scriptJson->m_Items[v37];
    if ( !v39 )
      goto LABEL_26;
    infos = v39->fields.infos;
    if ( infos )
      break;
LABEL_25:
    ++v37;
    if ( !scriptJson )
      goto LABEL_26;
  }
  v41 = 0;
  while ( 1 )
  {
    v42 = infos->max_length;
    if ( (int)v41 >= v42 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_25;
    }
    if ( (unsigned int)v41 >= v42 )
      goto LABEL_33;
    v43 = infos->m_Items[v41];
    if ( !v43 )
      goto LABEL_26;
    v22 = System_String__Equals_63493168(labelName, v43->fields.id, 0);
    if ( v22 )
      break;
    infos = v39->fields.infos;
    ++v41;
    if ( !infos )
      goto LABEL_26;
  }
  v45 = v39->fields.conds;
  *conds = v45;
  sub_1C2D434((CGThumbnailListItem_o *)conds, (int32_t)v45, v24, v44);
  *isInvalidVoiceList = v39->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v39->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1C2D434((CGThumbnailListItem_o *)overwriteName, (int32_t)materialOverwriteName, v46, v47),
        System_String__IsNullOrEmpty(*overwriteName, 0)) )
  {
    v49 = v39->fields.overwriteName;
    *overwriteName = v49;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteName, (int32_t)v49, v46, v47);
  }
  v50 = v39->fields.overwriteNameDefault;
  *overwriteNameDefault = v50;
  sub_1C2D434((CGThumbnailListItem_o *)overwriteNameDefault, (int32_t)v50, v46, v47);
  v36 = v39->fields.overwritePriority;
LABEL_31:
  *overwritePriority = v36;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getRankUpFriendShip(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_42564368(this, 1, 3, friendShipRank, 0, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_42564368(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0), result = 0, !assetName) )
  {
    sub_1C2D6EC(assetName, method);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0) )
    return result;
  return 0;
}


System_String_o *ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_42560796(this->fields.id, method);
}


System_String_o *ServantVoiceEntity__getVoiceAssetName_42560796(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4C27D63 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4417/*"ChrVoice_"*/);
    byte_4C27D63 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_4417/*"ChrVoice_"*/, v2, 0);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  Il2CppObject *p_obj; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v13; // x8
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C27D64 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C27D64 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1C2D6EC(v6, p_obj);
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( (unsigned int)v11 >= max_length )
      sub_1C2D6F4(v6, p_obj, v8);
    v13 = scriptJson->m_Items[v11];
    if ( v13 )
    {
      if ( v5 )
      {
        p_obj = &v13->fields.infos->obj;
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
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)p_obj;
            sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)p_obj, v8, v9);
          }
          scriptJson = this->fields.scriptJson;
          ++v11;
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
  __int64 v16; // x2
  const MethodInfo *v17; // x3
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
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4C27D66 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D66 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v15);
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)saveNameList;
          sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)saveNameList, v16, v17);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
      }
    }
LABEL_32:
    sub_1C2D6EC(Instance, saveNameList);
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
            sub_1C2D6F4(Instance, saveNameList, v16);
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
            saveNameList = &v25->fields.infos->obj;
            v32 = v11->fields._items;
            v33 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v11->fields._version;
            if ( !v32 )
              goto LABEL_32;
            v34 = v11->fields._size;
            if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                saveNameList,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &v32->obj.klass + v34;
              v11->fields._size = v34 + 1;
              v35[4] = (Il2CppClass *)saveNameList;
              sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)saveNameList, v16, v31);
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_42564368(
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
  __int64 v18; // x2
  const MethodInfo *v19; // x3
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
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4C27D69 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D69 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v17);
  if ( Instance )
  {
    if ( v16 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v16->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v16->fields._version;
      if ( items )
      {
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            saveNameList,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v23[4] = (Il2CppClass *)saveNameList;
          sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)saveNameList, v18, v19);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
      }
    }
LABEL_40:
    sub_1C2D6EC(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v25 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(scriptJson->max_length);
    if ( (__int64)v25 >= (int)max_length_low )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    if ( v25 >= max_length_low )
LABEL_43:
      sub_1C2D6F4(Instance, saveNameList, v18);
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
                if ( !v16 )
                  goto LABEL_40;
                saveNameList = &v27->fields.infos->obj;
                v34 = v16->fields._items;
                v35 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v16->fields._version;
                if ( !v34 )
                  goto LABEL_40;
                v36 = v16->fields._size;
                if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    saveNameList,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                }
                else
                {
                  v37 = &v34->obj.klass + v36;
                  v16->fields._size = v36 + 1;
                  v37[4] = (Il2CppClass *)saveNameList;
                  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), (int32_t)saveNameList, v18, v19);
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_42565096(
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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v18; // x9
  SvtVoiceInfo_o *v19; // x8
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

  if ( (byte_4C27D6A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16126/*"_B050"*/);
    byte_4C27D6A = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16126/*"_B050"*/, 0);
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
        return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
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
        Instance = (Il2CppObject *)System_String__Equals_63493168(labelName, v27->fields.id, 0);
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
          if ( v14 )
          {
            p_obj = &v23->fields.infos->obj;
LABEL_38:
            items = v14->fields._items;
            v29 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v14->fields._version;
            if ( items )
            {
              size = v14->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  p_obj,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v31[4] = (Il2CppClass *)p_obj;
                sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), (int32_t)p_obj, v15, v16);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
            }
          }
LABEL_43:
          sub_1C2D6EC(Instance, p_obj);
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
  v18 = scriptJson->max_length;
  if ( !v18 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
  if ( !(_DWORD)v18 )
LABEL_44:
    sub_1C2D6F4(Instance, p_obj, v15);
  v19 = scriptJson->m_Items[0];
  if ( !v19 )
    goto LABEL_43;
  p_obj = &v19->fields.infos->obj;
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
  __int64 v17; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v20; // w24
  int v21; // w26
  bool v22; // w20
  ServantVoiceCond_o *v23; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v25; // x0
  UserGameEntity_o *v26; // x2
  const MethodInfo *v28; // [xsp+0h] [xbp-60h]

  if ( (byte_4C27D77 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&VoiceCondType_TypeInfo);
    byte_4C27D77 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v12 = (UserServantMaster_o *)Instance) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v12, 0),
        !Entity)
    || (v14 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v16),
        !info)
    || (conds = info->fields.conds) == 0 )
  {
LABEL_22:
    sub_1C2D6EC(Instance, v11);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v20 = (int)Instance;
  v21 = 0;
  v22 = isBeforeFriendship;
  do
  {
    if ( v21 >= (unsigned int)max_length )
      sub_1C2D6F4(Instance, v11, v17);
    v23 = conds->m_Items[v21];
    if ( !v23 )
      goto LABEL_22;
    if ( v23->fields.condType == 23 )
    {
      value = v23->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Instance = (UserServantEntity_array *)VoiceCondType__IsSatisfyCostumeCondition(value, imageLimitCount, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    else
    {
      v25 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0);
      Instance = (UserServantEntity_array *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                              v25,
                                              v23,
                                              v26,
                                              (UserServantEntity_o *)Entity,
                                              v14,
                                              v20,
                                              (int32_t)v25,
                                              v22,
                                              v28);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v21;
  }
  while ( v21 < max_length );
  return 1;
}


bool ServantVoiceEntity__isAvailableVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4C27D75 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v8);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_42571684(this, info, (UserServantEntity_o *)Entity, v10);
}


bool ServantVoiceEntity__isAvailableVoice_42571684(
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
  __int64 v12; // x2
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
  const MethodInfo *v28; // [xsp+0h] [xbp-70h]

  if ( (byte_4C27D76 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&VoiceCondType_TypeInfo);
    byte_4C27D76 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_27;
  UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  v15 = (int)Instance;
  v16 = 0;
  while ( 2 )
  {
    if ( v16 >= max_length )
      sub_1C2D6F4(Instance, v8, v12);
    v17 = conds->m_Items[v16];
    if ( !v17 )
LABEL_28:
      sub_1C2D6EC(Instance, v8);
    condType = v17->fields.condType;
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
        value = v17->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v22 = -1;
        v23 = condType;
        v24 = value;
        goto LABEL_18;
      default:
        if ( (unsigned int)(condType - 24) < 3 )
        {
          v25 = v17->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0);
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          v23 = condType;
          v24 = v25;
          v22 = LimitCount;
LABEL_18:
          Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(v23, v24, v22, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
        else
        {
          if ( (unsigned int)(condType - 41) <= 2 )
            goto LABEL_27;
LABEL_13:
          v19 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0);
          Instance = (Il2CppObject *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                       v19,
                                       v17,
                                       v20,
                                       userSvtEntity,
                                       AllList,
                                       v15,
                                       (int32_t)v19,
                                       0,
                                       v28);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
LABEL_19:
        max_length = conds->max_length;
        if ( (int)++v16 < max_length )
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
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27D7E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D7E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (__int64)entity[6].klass <= time;
LABEL_9:
    sub_1C2D6EC(Instance, v7);
  }
  return 0;
}


bool ServantVoiceEntity__isQuestClearState(ServantVoiceEntity_o *this, int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27D7D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D7D = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    sub_1C2D6EC(Instance, v5);
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
  __int64 v8; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4C27D72 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v8);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_42569660(this, (UserServantEntity_o *)Entity, voiceId, v10);
}


ServantVoiceData_array *ServantVoiceEntity__lotteryLevelUpVoice_42569660(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v13; // x29
  UserServantEntity_Fields *p_fields; // x27
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v16; // x24
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v18; // x9
  ServantVoiceData_o *v19; // x8
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  ServantVoiceData_o *v25; // x8
  __int128 v26; // q1
  int32_t id; // w25
  System_String_o *v28; // x26
  const MethodInfo *v29; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v32; // x21
  int v33; // w23
  int32_t i; // w22
  int32_t Data; // w22
  __int64 v36; // x8
  __int64 v37; // x8
  int32_t v38; // w0
  unsigned int v39; // w29
  SvtVoiceInfo_o *v40; // x24
  struct ServantVoiceData_array *v41; // x8
  il2cpp_array_size_t v42; // x9
  ServantVoiceData_o *v43; // x8
  __int128 v44; // q1
  int32_t v45; // w25
  System_String_o *v46; // x26
  const MethodInfo *v47; // x3
  struct ServantVoiceCond_array *v48; // x8
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-80h]

  if ( (byte_4C27D74 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&ServantVoiceData___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_WeightRate_int___ctor__);
    sub_1C2D490(&Method_WeightRate_int__getData__);
    sub_1C2D490(&Method_WeightRate_int__getTotalWeight__);
    sub_1C2D490(&Method_WeightRate_int__setWeight__);
    sub_1C2D490(&WeightRate_int__TypeInfo);
    byte_4C27D74 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_78;
  v13 = 0;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      break;
    if ( (unsigned int)v13 >= (unsigned int)max_length )
      goto LABEL_79;
    v16 = scriptJson->m_Items[v13];
    if ( !v16 )
      goto LABEL_78;
    infos = v16->fields.infos;
    if ( infos )
    {
      v18 = infos->max_length;
      if ( v18 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v18 )
            goto LABEL_79;
          v19 = infos->m_Items[0];
          if ( !v19 )
            goto LABEL_78;
          Instance = System_String__op_Equality(v19->fields.id, voiceId, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v18 )
            goto LABEL_79;
          v25 = infos->m_Items[0];
          if ( !v25 )
            goto LABEL_78;
          v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v28 = v25->fields.id;
          *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v56.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v55 = v56;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v55, 0);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v28,
                       0,
                       Instance,
                       -1,
                       0,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            conds = v16->fields.conds;
            if ( conds )
            {
              if ( conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_42571684(this, v16, userServantEntity, v29);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v10 )
                    goto LABEL_78;
                  items = v10->fields._items;
                  v22 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v10->fields._version;
                  if ( !items )
                    goto LABEL_78;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v16,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v24 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v24[4] = (Il2CppClass *)v16;
                    sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v16, v11, v20);
                  }
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v13;
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
      v39 = 0;
      while ( v39 < (unsigned int)max_length )
      {
        v40 = scriptJson->m_Items[v39];
        if ( !v40 )
          goto LABEL_78;
        v41 = v40->fields.infos;
        if ( v41 )
        {
          v42 = v41->max_length;
          if ( v42 )
          {
            if ( !(_DWORD)v42 )
              break;
            v43 = v41->m_Items[0];
            if ( !v43 )
              goto LABEL_78;
            v44 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v45 = this->fields.id;
            v46 = v43->fields.id;
            *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v56.fields.fakeValue = v44;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v54 = v56;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v54, 0);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v45,
                         v46,
                         0,
                         Instance,
                         -1,
                         0,
                         0,
                         0);
            if ( (Instance & 1) != 0 )
            {
              v48 = v40->fields.conds;
              if ( v48 )
              {
                if ( v48->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_42571684(this, v40, userServantEntity, v47);
                  if ( (Instance & 1) != 0 )
                  {
                    v50 = v10->fields._items;
                    v51 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v10->fields._version;
                    if ( !v50 )
                      goto LABEL_78;
                    v52 = v10->fields._size;
                    if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v10,
                        (Il2CppObject *)v40,
                        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v53 = &v50->obj.klass + v52;
                      v10->fields._size = v52 + 1;
                      v53[4] = (Il2CppClass *)v40;
                      sub_1C2D434((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v40, v11, v49);
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
        if ( (int)++v39 >= (int)max_length )
          goto LABEL_76;
      }
LABEL_79:
      sub_1C2D6F4(Instance, v8, v11);
    }
LABEL_76:
    if ( v10->fields._size )
    {
LABEL_37:
      v32 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v32, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
      v33 = v10->fields._size;
      if ( v33 >= 1 )
      {
        if ( !v32 )
          goto LABEL_78;
        for ( i = 0; i != v33; ++i )
          WeightRate_int___setWeight(v32, 1, i, (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0);
      if ( (Instance & 1) != 0 || v10->fields._size < 1 )
      {
LABEL_50:
        if ( v32 )
        {
          v38 = UnityEngine_Random__Range_71123924(0, v32->fields.totalweight, 0);
          Data = WeightRate_int___getData(v32, v38, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v10,
                                Data,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v36 = *(_QWORD *)(Instance + 64);
          if ( !v36 )
            break;
          if ( !*(_DWORD *)(v36 + 24) )
            goto LABEL_79;
          v37 = *(_QWORD *)(v36 + 32);
          if ( !v37 )
            break;
          Instance = System_String__op_Equality(*(System_String_o **)(v37 + 16), voiceId, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v10->fields._size )
            goto LABEL_50;
        }
      }
LABEL_78:
      sub_1C2D6EC(Instance, v8);
    }
  }
  return (ServantVoiceData_array *)sub_1C2D538(ServantVoiceData___TypeInfo, 0);
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
  __int64 v9; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v13; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v15; // x9
  ServantVoiceData_o *v16; // x8
  __int128 v17; // q1
  int32_t id; // w24
  System_String_o *v19; // x25
  const MethodInfo *v20; // x3
  struct ServantVoiceCond_array *conds; // x8
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-80h]

  if ( (byte_4C27D73 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27D73 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_28:
    sub_1C2D6EC(Instance, v6);
  }
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v8;
    if ( (unsigned int)v11 >= max_length )
      goto LABEL_31;
    v13 = scriptJson->m_Items[v11];
    if ( !v13 )
      goto LABEL_28;
    infos = v13->fields.infos;
    if ( infos )
    {
      v15 = infos->max_length;
      if ( v15 )
      {
        if ( !(_DWORD)v15 )
LABEL_31:
          sub_1C2D6F4(Instance, v6, v9);
        v16 = infos->m_Items[0];
        if ( !v16 )
          goto LABEL_28;
        v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v19 = v16->fields.id;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v29;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v28, 0);
        if ( !MasterData_object )
          goto LABEL_28;
        Instance = VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     id,
                     v19,
                     0,
                     Instance,
                     -1,
                     0,
                     0,
                     0);
        if ( (Instance & 1) != 0 )
        {
          conds = v13->fields.conds;
          if ( conds )
          {
            if ( conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_42571684(this, v13, userServantEntity, v20);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  goto LABEL_28;
                items = v8->fields._items;
                v24 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v8->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v13,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)v13;
                  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v13, v9, v22);
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
      goto LABEL_28;
  }
}