void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E7B2 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, method);
    byte_4A2E7B2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4A2E791 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&voicePrefix);
    byte_4A2E791 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_2E60ABC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4A2E79E & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, *(_QWORD *)&rankNow);
    byte_4A2E79E = 1;
  }
  v5 = sub_1B76268(int___TypeInfo, v3);
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
        sub_1B76424(v5, v6);
      *(_DWORD *)(v5 + 32 + 4 * v8++) = 0;
    }
    while ( (int)v7 != v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1B7641C(v5, v6);
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
    sub_1B7641C(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1B76424(this, *(_QWORD *)&type);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_61543376(labelName, v12->fields.id, 0LL);
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
    sub_1B7641C(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0LL;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_24:
        sub_1B76424(this, method);
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
    return ServantVoiceEntity__getVoiceList_39585820(this, 3, labelName, 0LL, 1, v5);
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
      sub_1B7641C(IsNullOrEmpty, v6);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
        sub_1B76424(IsNullOrEmpty, v6);
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

  if ( (byte_4A2E7B1 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A2E7B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_1B7641C(Instance, v7);
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
      sub_1B76424(Instance, v7);
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

  if ( (byte_4A2E7A7 & 1) == 0 )
  {
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cond);
    this = (ServantVoiceEntity_o *)sub_1B761C0(&VoiceCondType_TypeInfo, v15);
    byte_4A2E7A7 = 1;
  }
  if ( !cond )
LABEL_41:
    sub_1B7641C(this, cond);
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
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v29, 0LL);
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

  return ServantVoiceEntity__getVoiceList_39585820(this, 6, labelName, 0LL, 1, v3);
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  il2cpp_array_size_t v17; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v19; // x28
  struct ServantVoiceCond_array *conds; // x29
  __int64 v21; // x8
  __int64 v22; // x19
  ServantVoiceCond_o *v23; // x27
  unsigned int condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A2E7A8 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    sub_1B761C0(&NetworkManager_TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A2E7A8 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_36:
    sub_1B7641C(Instance, p_obj);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v17 >= max_length )
      goto LABEL_38;
    v19 = scriptJson->m_Items[v17];
    if ( !v19 )
      goto LABEL_36;
    conds = v19->fields.conds;
    if ( conds && (v21 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v21 >= 1 )
      {
        v22 = 0LL;
        while ( (unsigned int)v22 < (unsigned int)v21 )
        {
          v23 = conds->m_Items[v22];
          if ( !v23 || !v16 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v16,
                                       &entity,
                                       v23->fields.value,
                                       (const MethodInfo_30FF7D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_36;
            if ( Time <= (__int64)entity[6].monitor )
            {
              condType = v23->fields.condType;
              if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
              {
                if ( !v9 )
                  goto LABEL_36;
                p_obj = &v19->fields.infos->obj;
                items = v9->fields._items;
                v26 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v9->fields._version;
                if ( !items )
                  goto LABEL_36;
                size = v9->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    p_obj,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                }
                else
                {
                  v28 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v28[4] = (Il2CppClass *)p_obj;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)p_obj, v13, v14);
                }
              }
            }
          }
          LODWORD(v21) = conds->max_length;
          if ( (int)++v22 >= (int)v21 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1B76424(Instance, p_obj);
      }
    }
    else
    {
      if ( !v9 )
        goto LABEL_36;
      p_obj = &v19->fields.infos->obj;
      v29 = v9->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v9->fields._version;
      if ( !v29 )
        goto LABEL_36;
      v31 = v9->fields._size;
      if ( (unsigned int)v31 >= v29->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          p_obj,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &v29->obj.klass + v31;
        v9->fields._size = v31 + 1;
        v32[4] = (Il2CppClass *)p_obj;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)p_obj, v13, v14);
      }
    }
LABEL_35:
    ++v17;
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
  struct ServantVoiceData_array *infos; // x23
  ServantVoiceData_o *v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4A2E794 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A2E794 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_1B7641C(Instance, v14);
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
      infos = v19->fields.infos;
      if ( infos )
      {
        if ( !infos->max_length )
LABEL_25:
          sub_1B76424(Instance, v14);
        v21 = infos->m_Items[0];
        if ( v21 )
        {
          if ( v16 )
          {
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         v16,
                                         svtId,
                                         v21->fields.id,
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
                                           &infos->obj,
                                           (const MethodInfo_34D7964 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                items = v12->fields._items;
                v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v12->fields._version;
                if ( !items )
                  goto LABEL_22;
                size = v12->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v12,
                    &infos->obj,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v27 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v27[4] = (Il2CppClass *)infos;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)infos, v22, v23);
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
  int32_t v14; // w2
  int32_t v15; // w3
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

  if ( (byte_4A2E796 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A2E796 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_21:
    sub_1B7641C(Instance, v13);
  }
  v17 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v11;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_24;
    v13 = (Il2CppObject *)scriptJson->m_Items[v17];
    if ( !v13 )
      goto LABEL_21;
    monitor = v13[4].monitor;
    if ( monitor )
    {
      v20 = monitor[3];
      if ( v20 )
      {
        if ( !(_DWORD)v20 )
LABEL_24:
          sub_1B76424(Instance, v13);
        v21 = monitor[4];
        if ( !v21 )
          goto LABEL_21;
        if ( *(_DWORD *)(v21 + 16) == condType )
        {
          if ( !v11 )
            goto LABEL_21;
          items = v11->fields._items;
          v23 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              v13,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v13;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v13, v14, v15);
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
  if ( (byte_4A2E79B & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_1B761C0(&StringLiteral_16136/*"_B050"*/, *(_QWORD *)&type);
    byte_4A2E79B = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16136/*"_B050"*/, 0LL);
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
          sub_1B76424(this, *(_QWORD *)&type);
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_1B7641C(this, *(_QWORD *)&type);
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
              this = (ServantVoiceEntity_o *)System_String__Equals_61543376(labelName, v17->fields.id, 0LL);
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

  return ServantVoiceEntity__getVoiceList_39585092(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_39585092(this, 2, 23, costumeId, 0LL, -1, v3);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v11; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v13; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v15; // x9
  __int64 v16; // x25
  ServantVoiceCond_o *v17; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A2E7AA & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v4);
    byte_4A2E7AA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1B7641C(v6, p_obj);
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( v11 >= max_length )
LABEL_25:
      sub_1B76424(v6, p_obj);
    v13 = scriptJson->m_Items[v11];
    if ( v13 )
    {
      conds = v13->fields.conds;
      if ( conds )
      {
        v15 = *(_QWORD *)&conds->max_length;
        if ( v15 )
        {
          if ( (int)v15 >= 1 )
          {
            v16 = 0LL;
            do
            {
              if ( (unsigned int)v16 >= (unsigned int)v15 )
                goto LABEL_25;
              v17 = conds->m_Items[v16];
              if ( !v17 )
                goto LABEL_23;
              if ( v17->fields.condType == 15 )
              {
                if ( !v5 )
                  goto LABEL_23;
                p_obj = &v13->fields.infos->obj;
                items = v5->fields._items;
                v19 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v5->fields._version;
                if ( !items )
                  goto LABEL_23;
                size = v5->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    p_obj,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v21[4] = (Il2CppClass *)p_obj;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)p_obj, v8, v9);
                }
              }
              LODWORD(v15) = conds->max_length;
              ++v16;
            }
            while ( (int)v16 < (int)v15 );
            scriptJson = this->fields.scriptJson;
          }
        }
      }
      ++v11;
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v14; // x21
  il2cpp_array_size_t v15; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v17; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v19; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v21; // x23
  int32_t condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4A2E7A9 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v2);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v4);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v5);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A2E7A9 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1B7641C(Time, p_obj);
  v14 = Time;
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v15 >= max_length )
LABEL_40:
      sub_1B76424(Time, p_obj);
    v17 = scriptJson->m_Items[v15];
    if ( !v17 )
      goto LABEL_38;
    conds = v17->fields.conds;
    if ( conds && (v19 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v19 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v19; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v19 )
            goto LABEL_40;
          v21 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v21 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v21->fields.value,
                                    (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v21->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v14 )
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
            p_obj = &v17->fields.infos->obj;
            items = v8->fields._items;
            v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                p_obj,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v26[4] = (Il2CppClass *)p_obj;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)p_obj, v11, v12);
            }
          }
LABEL_30:
          LODWORD(v19) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_38;
      p_obj = &v17->fields.infos->obj;
      v27 = v8->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v8->fields._version;
      if ( !v27 )
        goto LABEL_38;
      v29 = v8->fields._size;
      if ( (unsigned int)v29 >= v27->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          p_obj,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &v27->obj.klass + v29;
        v8->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)p_obj;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)p_obj, v11, v12);
      }
    }
    ++v15;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_39596644(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39585820(this, 5, labelName, 0LL, 1, v3);
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
  int32_t v36; // w2
  int32_t v37; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v39; // w21
  il2cpp_array_size_t max_length; // w9
  Il2CppObject *v41; // x27
  _BOOL4 v42; // w24
  _QWORD *monitor; // x26
  __int64 v44; // x8
  __int64 v45; // x19
  __int64 v46; // x20
  int32_t v47; // w28
  int64_t v48; // x29
  int v49; // w8
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  _BOOL8 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *current; // x19
  _DWORD *v59; // x20
  int v60; // w8
  unsigned int v61; // w21
  __int64 v62; // x8
  Il2CppObject *klass; // x1
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  System_Collections_Generic_List_object__o *v69; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v70; // [xsp+10h] [xbp-C0h]
  int64_t v71; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v74; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_4A2E7B0 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, isEventDateCondOnly);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v15);
    sub_1B761C0(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v16);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v18);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_1B761C0(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v20);
    sub_1B761C0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v21);
    sub_1B761C0(&NetworkManager_TypeInfo, v22);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_4A2E7B0 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v69 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v24 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v24,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v24 )
    goto LABEL_54;
  items = v24->fields._items;
  v28 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v24->fields._size;
  v74 = v24;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      14,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v24->fields._size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 19;
  }
  v32 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v32,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
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
        *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v32->fields._size = v35 + 1;
      *((_DWORD *)v33->m_Items + v35) = checkCondType;
    }
  }
  v70 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v71 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_54;
  v39 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v39 >= (int)max_length )
      break;
    if ( v39 >= max_length )
      goto LABEL_78;
    v41 = (Il2CppObject *)scriptJson->m_Items[v39];
    if ( !v41 )
      goto LABEL_54;
    v42 = v6;
    monitor = v41[4].monitor;
    if ( monitor )
    {
      v44 = monitor[3];
      if ( v44 )
      {
        if ( (int)v44 >= 1 )
        {
          v45 = 0LL;
          while ( (unsigned int)v45 < (unsigned int)v44 )
          {
            v46 = monitor[v45 + 4];
            if ( !v46 )
              goto LABEL_54;
            v47 = *(_DWORD *)(v46 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v74,
                     v47,
                     (const MethodInfo_34BD154 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v32 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v32,
                       v47,
                       (const MethodInfo_34BD154 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v46 + 20),
                              (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v46 + 20) != eventId )
              goto LABEL_53;
            v48 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v74,
                     v47,
                     (const MethodInfo_34BD154 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v49 = *(_QWORD *)(v48 + 96) <= v71 ? 13 : 14;
              if ( v47 == 19 )
                v49 = 19;
              if ( v47 != v49 )
                goto LABEL_53;
            }
            LODWORD(v44) = *((_DWORD *)monitor + 6);
            if ( (int)++v45 >= (int)v44 )
              goto LABEL_48;
          }
LABEL_78:
          sub_1B76424(Time, v26);
        }
LABEL_48:
        if ( !v70 )
          goto LABEL_54;
        v50 = v70->fields._items;
        v51 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v70->fields._version;
        if ( !v50 )
          goto LABEL_54;
        v52 = v70->fields._size;
        if ( (unsigned int)v52 >= v50->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v70,
            v41,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &v50->obj.klass + v52;
          v70->fields._size = v52 + 1;
          v53[4] = (Il2CppClass *)v41;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v41, v36, v37);
        }
      }
    }
LABEL_53:
    ++v39;
    v6 = v42;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_54;
  }
  Time = (int64_t)v70;
  if ( !v70 )
LABEL_54:
    sub_1B7641C(Time, v26);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    v70,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v76 = v75;
LABEL_57:
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v54 )
      break;
    current = v76.fields._current;
    if ( !v76.fields._current )
      sub_1B7641C(v54, v55);
    v59 = v76.fields._current[4].monitor;
    if ( !v59 )
      sub_1B7641C(v54, v55);
    v60 = v59[6];
    if ( v60 >= 1 )
    {
      v61 = 0;
      while ( 1 )
      {
        if ( v61 >= v60 )
          sub_1B76424(v54, v55);
        v62 = *(_QWORD *)&v59[2 * v61 + 8];
        if ( !v62 )
          sub_1B7641C(v54, v55);
        if ( v6 )
          break;
        if ( !v32 )
          sub_1B7641C(v54, v55);
        v54 = System_Collections_Generic_List_Int32Enum___Contains(
                v32,
                *(_DWORD *)(v62 + 16),
                (const MethodInfo_34BD154 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v54 )
          break;
        v60 = v59[6];
        if ( (int)++v61 >= v60 )
          goto LABEL_57;
      }
      if ( !v69 )
        sub_1B7641C(v54, v55);
      klass = (Il2CppObject *)current[4].klass;
      v64 = v69->fields._items;
      v65 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v69->fields._version;
      if ( !v64 )
        sub_1B7641C(v54, klass);
      v66 = v69->fields._size;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v69,
          klass,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &v64->obj.klass + v66;
        v69->fields._size = v66 + 1;
        v67[4] = (Il2CppClass *)klass;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)klass, v56, v57);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v69;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_39599480(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39585820(this, 9, labelName, 0LL, 1, v3);
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

  if ( (byte_4A2E7AE & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4A2E7AE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_1B7641C(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)EventRewardVoiceList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_5:
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v10 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v19.fields._current;
    if ( !v19.fields._current )
      sub_1B7641C(v10, v11);
    monitor = (int)v19.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= monitor )
      sub_1B76424(v10, v11);
    v15 = current->m_Items[v14];
    if ( !v15 )
      sub_1B7641C(v10, v11);
    v16 = v15->fields.id;
    if ( !v16 )
      sub_1B7641C(0LL, v11);
    v10 = System_String__Equals_61543376(v16, id, 0LL);
    if ( v10 )
      break;
    monitor = current->max_length;
    if ( (int)++v14 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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

  if ( (byte_4A2E79F & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_1B761C0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_1B761C0(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_4A2E79F = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7
    || (items = v7->fields._items,
        v12 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1B7641C(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      81,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_39585820(
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
    return ServantVoiceEntity__getVoiceList_39585820(this, 2, labelName, 0LL, 0, v5);
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

  if ( (byte_4A2E7A0 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_1B761C0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_1B761C0(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_4A2E7A0 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7
    || (items = v7->fields._items,
        v12 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1B7641C(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      81,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_39585820(
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v11; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v13; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v15; // x10
  __int64 v16; // x25
  char v17; // w27
  char v18; // w8
  char v19; // w9
  ServantVoiceCond_o *v20; // x10
  int32_t condType; // w11
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A2E7AB & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v4);
    byte_4A2E7AB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_34;
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( v11 >= max_length )
LABEL_36:
      sub_1B76424(isQuestClearState, p_obj);
    v13 = scriptJson->m_Items[v11];
    if ( !v13 )
      goto LABEL_34;
    conds = v13->fields.conds;
    if ( conds )
    {
      v15 = *(_QWORD *)&conds->max_length;
      if ( v15 )
      {
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v16 >= (unsigned int)v15 )
              goto LABEL_36;
            v20 = conds->m_Items[v16];
            if ( !v20 )
              goto LABEL_34;
            condType = v20->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v18 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v20->fields.value,
                                        v8);
                  if ( isQuestClearState )
                    goto LABEL_33;
                  v18 = 0;
                  goto LABEL_27;
                }
                if ( (v17 & 1) == 0 )
                  goto LABEL_33;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v20->fields.value,
                                      v8);
                if ( isQuestClearState )
                  goto LABEL_33;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v20->fields.value,
                                      v8);
                if ( !isQuestClearState )
                  goto LABEL_33;
                break;
              default:
                if ( (v19 & 1) == 0 )
                  goto LABEL_33;
                goto LABEL_27;
            }
            v17 = 1;
            v18 = 1;
LABEL_27:
            LODWORD(v15) = conds->max_length;
            ++v16;
            v19 = 1;
            if ( (int)v16 >= (int)v15 )
            {
              if ( v5 )
              {
                p_obj = &v13->fields.infos->obj;
                items = v5->fields._items;
                v23 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v5->fields._version;
                if ( items )
                {
                  size = v5->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v5,
                      p_obj,
                      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v25 = &items->obj.klass + size;
                    v5->fields._size = size + 1;
                    v25[4] = (Il2CppClass *)p_obj;
                    sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)p_obj, (int32_t)v8, v9);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1B7641C(isQuestClearState, p_obj);
            }
          }
        }
      }
    }
LABEL_33:
    scriptJson = this->fields.scriptJson;
    ++v11;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_39597156(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39585820(this, 8, labelName, 0LL, 1, v3);
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
  int64_t Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t FriendShipRank; // w0
  int v30; // w22
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v39; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v41; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v43; // x8
  struct ServantVoiceCond_array *conds; // x8
  __int64 v45; // x9
  ServantVoiceCond_o *v46; // x10
  int v47; // w10
  ServantVoiceCond_o *v48; // x12
  int32_t condType; // w13
  bool v50; // w12
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int32_t id; // w26
  int32_t v57; // w25

  if ( (byte_4A2E797 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v15);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_1B761C0(&NetworkManager_TypeInfo, v17);
    sub_1B761C0(&ServantLimitUpVoiceCache_TypeInfo, v18);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A2E797 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v22 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v21);
  v24 = v22 - 1;
  if ( v22 < 1 )
    goto LABEL_11;
  v25 = v22;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
        v57 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v57, 0LL);
      }
    }
  }
  else
  {
LABEL_11:
    v30 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v23);
  if ( Instance )
  {
    if ( !v20 )
      goto LABEL_68;
    p_obj = *(Il2CppObject **)(Instance + 64);
    version = v20->fields._version;
    items = v20->fields._items;
    v35 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_15:
    v20->fields._version = version + 1;
    if ( !items )
      goto LABEL_68;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        p_obj,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v37[4] = (Il2CppClass *)p_obj;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)p_obj, v31, v32);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_68;
    v39 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v39 >= (int)max_length )
        break;
      if ( v39 >= max_length )
        goto LABEL_69;
      v41 = scriptJson->m_Items[v39];
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v41 )
        goto LABEL_68;
      infos = v41->fields.infos;
      if ( !infos )
        goto LABEL_68;
      if ( !infos->max_length )
        goto LABEL_69;
      v43 = infos->m_Items[0];
      if ( !v43 || !Instance )
        goto LABEL_68;
      Instance = VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)Instance,
                   this->fields.id,
                   v43->fields.id,
                   0LL,
                   -1LL,
                   genderType,
                   0LL,
                   0LL,
                   0LL);
      conds = v41->fields.conds;
      if ( conds )
      {
        v45 = *(_QWORD *)&conds->max_length;
        if ( v45 )
        {
          if ( !(_DWORD)v45 )
LABEL_69:
            sub_1B76424(Instance, p_obj);
          v46 = conds->m_Items[0];
          if ( !v46 )
            goto LABEL_68;
          if ( v46->fields.condType != 11 )
            goto LABEL_48;
          if ( v30 != -1 && (_DWORD)v45 != 1 )
          {
            if ( (int)v45 < 1 )
              goto LABEL_48;
            v47 = 0;
            while ( 1 )
            {
              v48 = conds->m_Items[v47];
              if ( !v48 )
                goto LABEL_68;
              condType = v48->fields.condType;
              if ( condType == 20 )
              {
                v50 = v48->fields.value <= v30;
              }
              else
              {
                if ( condType == 22 && v48->fields.value >= v30 && (Instance & 1) != 0 )
                {
LABEL_50:
                  if ( v20 )
                  {
                    p_obj = &v41->fields.infos->obj;
                    v51 = v20->fields._items;
                    v52 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v20->fields._version;
                    if ( v51 )
                    {
                      v53 = v20->fields._size;
                      if ( (unsigned int)v53 >= v51->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v20,
                          p_obj,
                          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v54 = &v51->obj.klass + v53;
                        v20->fields._size = v53 + 1;
                        v54[4] = (Il2CppClass *)p_obj;
                        sub_1B76164((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)p_obj, v31, v32);
                      }
                      goto LABEL_48;
                    }
                  }
LABEL_68:
                  sub_1B7641C(Instance, p_obj);
                }
                v50 = 0;
              }
              if ( (v50 & Instance & 1) != 0 )
                goto LABEL_50;
              if ( (_DWORD)v45 == ++v47 )
                goto LABEL_48;
            }
          }
          if ( (Instance & 1) == 0 )
            goto LABEL_48;
          if ( !v20 )
            goto LABEL_68;
          p_obj = &v41->fields.infos->obj;
          version = v20->fields._version;
          items = v20->fields._items;
          v35 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          goto LABEL_15;
        }
      }
LABEL_48:
      scriptJson = this->fields.scriptJson;
      ++v39;
      if ( !scriptJson )
        goto LABEL_68;
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

  if ( (byte_4A2E7AF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4A2E7AF = 1;
  }
  memset(&v19, 0, sizeof(v19));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1B7641C(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_5:
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v10 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v19.fields._current;
    if ( !v19.fields._current )
      sub_1B7641C(v10, v11);
    monitor = (int)v19.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= monitor )
      sub_1B76424(v10, v11);
    v15 = current->m_Items[v14];
    if ( !v15 )
      sub_1B7641C(v10, v11);
    v16 = v15->fields.id;
    if ( !v16 )
      sub_1B7641C(0LL, v11);
    v10 = System_String__Equals_61543376(v16, id, 0LL);
    if ( v10 )
      break;
    monitor = current->max_length;
    if ( (int)++v14 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v12; // x22
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
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4A2E79D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&friendShipRank);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A2E79D = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v12 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_34:
    sub_1B7641C(Instance, p_obj);
  }
  v14 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( v14 >= max_length )
LABEL_37:
      sub_1B76424(Instance, p_obj);
    v16 = scriptJson->m_Items[v14];
    if ( v16 )
    {
      infos = v16->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v16->fields.conds;
        if ( !conds )
          goto LABEL_34;
        v19 = 0LL;
        while ( 1 )
        {
          v20 = conds->max_length;
          if ( (int)v19 >= v20 )
            break;
          if ( (unsigned int)v19 >= v20 )
            goto LABEL_37;
          v21 = conds->m_Items[v19];
          if ( !v21 )
            goto LABEL_34;
          if ( v21->fields.condType == 3 && v21->fields.value == friendShipRank )
          {
            v22 = v16->fields.infos;
            if ( !v22 )
              goto LABEL_34;
            if ( !v22->max_length )
              goto LABEL_37;
            v23 = v22->m_Items[0];
            if ( !v23 || !MasterData_object )
              goto LABEL_34;
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         (VoicePlayCondMaster_o *)MasterData_object,
                                         this->fields.id,
                                         v23->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL,
                                         0LL,
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v16, 0, 1, v24);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v12 )
                  goto LABEL_34;
                p_obj = &v16->fields.infos->obj;
                items = v12->fields._items;
                v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v12->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v12->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v12,
                    p_obj,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v30 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v30[4] = (Il2CppClass *)p_obj;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)p_obj, v25, v26);
                }
              }
            }
          }
          conds = v16->fields.conds;
          ++v19;
          if ( !conds )
            goto LABEL_34;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v14;
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
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x4
  struct ServantVoiceCond_array *conds; // x8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4A2E79C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&imageLimitCount);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A2E79C = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v12 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_25:
    sub_1B7641C(Instance, p_obj);
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
          sub_1B76424(Instance, p_obj);
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
                                             v22),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v12 )
              goto LABEL_25;
            p_obj = &v16->fields.infos->obj;
            items = v12->fields._items;
            v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                p_obj,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v27[4] = (Il2CppClass *)p_obj;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)p_obj, v20, v21);
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

  return ServantVoiceEntity__getVoiceList_39585820(this, 7, labelName, 0LL, 1, v3);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v27; // x9
  SvtVoiceInfo_o *v28; // x24
  ServantVoiceCond_array *v29; // x1
  System_String_o *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w8
  il2cpp_array_size_t v37; // w28
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v39; // x26
  struct ServantVoiceData_array *infos; // x9
  __int64 v41; // x29
  int v42; // w8
  ServantVoiceData_o *v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  ServantVoiceCond_array *v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *materialOverwriteName; // x1
  System_String_o *v50; // x1
  System_String_o *v51; // x1

  if ( (byte_4A2E79A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16136/*"_B050"*/, *(_QWORD *)&type);
    byte_4A2E79A = 1;
  }
  *conds = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)conds, 0, (int32_t)labelName, (int32_t)conds);
  *isInvalidVoiceList = 0;
  *overwriteName = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteName, 0, v18, v19);
  *overwriteNameDefault = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteNameDefault, 0, v20, v21);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v22 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16136/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( v22 )
  {
    if ( scriptJson )
    {
      v27 = *(_QWORD *)&scriptJson->max_length;
      if ( !v27 )
        return;
      if ( !(_DWORD)v27 )
LABEL_33:
        sub_1B76424(v22, v23);
      v28 = scriptJson->m_Items[0];
      if ( v28 )
      {
        v29 = v28->fields.conds;
        *conds = v29;
        sub_1B76164((ServantStatusBattleListViewItem_o *)conds, (int32_t)v29, v24, v25);
        *isInvalidVoiceList = v28->fields.isInvalidVoiceList;
        v30 = v28->fields.overwriteName;
        *overwriteName = v30;
        sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)v30, v31, v32);
        v33 = v28->fields.overwriteNameDefault;
        *overwriteNameDefault = v33;
        sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteNameDefault, (int32_t)v33, v34, v35);
        v36 = v28->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1B7641C(v22, v23);
  }
  if ( !scriptJson )
    goto LABEL_26;
  v37 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v37 >= (int)max_length )
      return;
    if ( v37 >= max_length )
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
  v41 = 0LL;
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
    v22 = System_String__Equals_61543376(labelName, v43->fields.id, 0LL);
    if ( v22 )
      break;
    infos = v39->fields.infos;
    ++v41;
    if ( !infos )
      goto LABEL_26;
  }
  v46 = v39->fields.conds;
  *conds = v46;
  sub_1B76164((ServantStatusBattleListViewItem_o *)conds, (int32_t)v46, v44, v45);
  *isInvalidVoiceList = v39->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v39->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)materialOverwriteName, v47, v48),
        System_String__IsNullOrEmpty(*overwriteName, 0LL)) )
  {
    v50 = v39->fields.overwriteName;
    *overwriteName = v50;
    sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)v50, v47, v48);
  }
  v51 = v39->fields.overwriteNameDefault;
  *overwriteNameDefault = v51;
  sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteNameDefault, (int32_t)v51, v47, v48);
  v36 = v39->fields.overwritePriority;
LABEL_31:
  *overwritePriority = v36;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getRankUpFriendShip(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_39585092(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_39585092(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0LL), result = 0, !assetName) )
  {
    sub_1B7641C(assetName, method);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_39581568(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_39581568(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4A2E792 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_4463/*"ChrVoice_"*/, method);
    byte_4A2E792 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61535060((System_String_o *)StringLiteral_4463/*"ChrVoice_"*/, v2, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v13; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v15; // x8
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A2E793 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&type);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    byte_4A2E793 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1B7641C(v8, p_obj);
  v13 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v13 >= max_length )
      sub_1B76424(v8, p_obj);
    v15 = scriptJson->m_Items[v13];
    if ( v15 )
    {
      if ( v7 )
      {
        p_obj = &v15->fields.infos->obj;
        items = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              p_obj,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v19[4] = (Il2CppClass *)p_obj;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)p_obj, v10, v11);
          }
          scriptJson = this->fields.scriptJson;
          ++v13;
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v27; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v29; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v31; // x9
  ServantVoiceCond_o *v32; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v34; // x8
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4A2E795 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A2E795 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v19);
  if ( Instance )
  {
    if ( v15 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v15->fields._items;
      v23 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            saveNameList,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v25[4] = (Il2CppClass *)saveNameList;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)saveNameList, v20, v21);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
      }
    }
LABEL_32:
    sub_1B7641C(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v27 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v27 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( (unsigned int)v27 >= max_length )
      goto LABEL_35;
    v29 = scriptJson->m_Items[v27];
    if ( !v29 )
      goto LABEL_32;
    conds = v29->fields.conds;
    if ( conds )
    {
      v31 = *(_QWORD *)&conds->max_length;
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
          if ( !infos->max_length )
LABEL_35:
            sub_1B76424(Instance, saveNameList);
          v34 = infos->m_Items[0];
          if ( !v34 || !MasterData_object )
            goto LABEL_32;
          Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                        (VoicePlayCondMaster_o *)MasterData_object,
                                        this->fields.id,
                                        v34->fields.id,
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
            saveNameList = &v29->fields.infos->obj;
            v37 = v15->fields._items;
            v38 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v15->fields._version;
            if ( !v37 )
              goto LABEL_32;
            v39 = v15->fields._size;
            if ( (unsigned int)v39 >= v37->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                saveNameList,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &v37->obj.klass + v39;
              v15->fields._size = v39 + 1;
              v40[4] = (Il2CppClass *)saveNameList;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)saveNameList, v35, v36);
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


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_39585092(
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
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v29; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v31; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v33; // x28
  int v34; // w8
  ServantVoiceCond_o *v35; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v37; // x8
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4A2E798 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A2E798 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v21);
  if ( Instance )
  {
    if ( v20 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v20->fields._items;
      v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v20->fields._version;
      if ( items )
      {
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            saveNameList,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v27[4] = (Il2CppClass *)saveNameList;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)saveNameList, v22, v23);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
      }
    }
LABEL_40:
    sub_1B7641C(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v29 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v29 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    if ( v29 >= max_length )
LABEL_43:
      sub_1B76424(Instance, saveNameList);
    v31 = scriptJson->m_Items[v29];
    if ( v31 )
    {
      conds = v31->fields.conds;
      if ( conds )
      {
        v33 = 0LL;
        while ( 1 )
        {
          v34 = conds->max_length;
          if ( (int)v33 >= v34 )
            break;
          if ( (unsigned int)v33 >= v34 )
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
              if ( !infos->max_length )
                goto LABEL_43;
              v37 = infos->m_Items[0];
              if ( !v37 || !MasterData_object )
                goto LABEL_40;
              Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                            (VoicePlayCondMaster_o *)MasterData_object,
                                            this->fields.id,
                                            v37->fields.id,
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
                saveNameList = &v31->fields.infos->obj;
                v38 = v20->fields._items;
                v39 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v20->fields._version;
                if ( !v38 )
                  goto LABEL_40;
                v40 = v20->fields._size;
                if ( (unsigned int)v40 >= v38->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v20,
                    saveNameList,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &v38->obj.klass + v40;
                  v20->fields._size = v40 + 1;
                  v41[4] = (Il2CppClass *)saveNameList;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)saveNameList, v22, v23);
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


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_39585820(
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v23; // x9
  SvtVoiceInfo_o *v24; // x8
  il2cpp_array_size_t v25; // w26
  _BOOL4 v26; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v28; // x25
  struct ServantVoiceData_array *infos; // x9
  __int64 v30; // x27
  int v31; // w8
  ServantVoiceData_o *v32; // x28
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4A2E799 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B761C0(&StringLiteral_16136/*"_B050"*/, v15);
    byte_4A2E799 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16136/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !scriptJson )
      goto LABEL_43;
    v25 = 0;
    v26 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v25 >= (int)max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
      if ( v25 >= max_length )
        goto LABEL_44;
      v28 = scriptJson->m_Items[v25];
      if ( !v28 )
        goto LABEL_43;
      infos = v28->fields.infos;
      if ( !infos )
        goto LABEL_34;
      v30 = 0LL;
      while ( 1 )
      {
        v31 = infos->max_length;
        if ( (int)v30 >= v31 )
          break;
        if ( (unsigned int)v30 >= v31 )
          goto LABEL_44;
        v32 = infos->m_Items[v30];
        if ( !v32 )
          goto LABEL_43;
        Instance = (Il2CppObject *)System_String__Equals_61543376(labelName, v32->fields.id, 0LL);
        if ( v26 )
        {
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_31;
          if ( !MasterData_object )
            goto LABEL_43;
          Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                       (VoicePlayCondMaster_o *)MasterData_object,
                                       this->fields.id,
                                       v32->fields.id,
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
            p_obj = &v28->fields.infos->obj;
LABEL_38:
            items = v19->fields._items;
            v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v19->fields._version;
            if ( items )
            {
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  p_obj,
                  *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v36[4] = (Il2CppClass *)p_obj;
                sub_1B76164((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)p_obj, v20, v21);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
            }
          }
LABEL_43:
          sub_1B7641C(Instance, p_obj);
        }
LABEL_31:
        infos = v28->fields.infos;
        ++v30;
        if ( !infos )
          goto LABEL_43;
      }
      scriptJson = this->fields.scriptJson;
LABEL_34:
      ++v25;
      if ( !scriptJson )
        goto LABEL_43;
    }
  }
  if ( !scriptJson )
    goto LABEL_43;
  v23 = *(_QWORD *)&scriptJson->max_length;
  if ( !v23 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
  if ( !(_DWORD)v23 )
LABEL_44:
    sub_1B76424(Instance, p_obj);
  v24 = scriptJson->m_Items[0];
  if ( !v24 )
    goto LABEL_43;
  p_obj = &v24->fields.infos->obj;
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

  if ( (byte_4A2E7A6 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1B761C0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B761C0(&VoiceCondType_TypeInfo, v11);
    byte_4A2E7A6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v15 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_30FF92C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v15, 0LL),
        !Entity)
    || (v17 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v19),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_22:
    sub_1B7641C(Instance, v14);
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
      sub_1B76424(Instance, v14);
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

  if ( (byte_4A2E7A4 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1B761C0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A2E7A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v10);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30FF92C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_39592404(this, info, (UserServantEntity_o *)Entity, v12);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_39592404(
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

  if ( (byte_4A2E7A5 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B761C0(&VoiceCondType_TypeInfo, v8);
    byte_4A2E7A5 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_25;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      sub_1B76424(Instance, v10);
    v18 = conds->m_Items[v17];
    if ( !v18 )
LABEL_26:
      sub_1B7641C(Instance, v10);
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

  if ( (byte_4A2E7AD & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A2E7AD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_30FF7D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (__int64)entity[6].klass <= time;
LABEL_9:
    sub_1B7641C(Instance, v9);
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

  if ( (byte_4A2E7AC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_1B761C0(&NetworkManager_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A2E7AC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, (int64_t)Instance, questId, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_12:
    sub_1B7641C(Instance, v7);
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

  if ( (byte_4A2E7A1 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B761C0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A2E7A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v10);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30FF92C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_39590380(this, (UserServantEntity_o *)Entity, voiceId, v12);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_39590380(
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
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  ServantVoiceData_o *v38; // x8
  __int128 v39; // q1
  int32_t id; // w25
  System_String_o *v41; // x26
  const MethodInfo *v42; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v45; // x21
  int v46; // w23
  int32_t i; // w22
  int32_t Data; // w22
  __int64 v49; // x8
  __int64 v50; // x8
  int32_t v51; // w0
  unsigned int v52; // w29
  SvtVoiceInfo_o *v53; // x24
  struct ServantVoiceData_array *v54; // x8
  __int64 v55; // x9
  ServantVoiceData_o *v56; // x8
  __int128 v57; // q1
  int32_t v58; // w25
  System_String_o *v59; // x26
  const MethodInfo *v60; // x3
  struct ServantVoiceCond_array *v61; // x8
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-80h]

  if ( (byte_4A2E7A3 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v10);
    sub_1B761C0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v11);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B761C0(&ServantVoiceData___TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B761C0(&Method_WeightRate_int___ctor__, v15);
    sub_1B761C0(&Method_WeightRate_int__getData__, v16);
    sub_1B761C0(&Method_WeightRate_int__getTotalWeight__, v17);
    sub_1B761C0(&Method_WeightRate_int__setWeight__, v18);
    sub_1B761C0(&WeightRate_int__TypeInfo, v19);
    byte_4A2E7A3 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
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
          v38 = infos->m_Items[0];
          if ( !v38 )
            goto LABEL_78;
          v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v41 = v38->fields.id;
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v70.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v69 = v70;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v69, 0LL);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v41,
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
                Instance = ServantVoiceEntity__isAvailableVoice_39592404(this, v28, userServantEntity, v42);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v23 )
                    goto LABEL_78;
                  items = v23->fields._items;
                  v35 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v23->fields._version;
                  if ( !items )
                    goto LABEL_78;
                  size = v23->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v23,
                      (Il2CppObject *)v28,
                      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v37 = &items->obj.klass + size;
                    v23->fields._size = size + 1;
                    v37[4] = (Il2CppClass *)v28;
                    sub_1B76164((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v28, v32, v33);
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
      v52 = 0;
      while ( v52 < (unsigned int)v27 )
      {
        v53 = scriptJson->m_Items[v52];
        if ( !v53 )
          goto LABEL_78;
        v54 = v53->fields.infos;
        if ( v54 )
        {
          v55 = *(_QWORD *)&v54->max_length;
          if ( v55 )
          {
            if ( !(_DWORD)v55 )
              break;
            v56 = v54->m_Items[0];
            if ( !v56 )
              goto LABEL_78;
            v57 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v58 = this->fields.id;
            v59 = v56->fields.id;
            *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v70.fields.fakeValue = v57;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v68 = v70;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v68, 0LL);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v58,
                         v59,
                         0LL,
                         Instance,
                         -1,
                         0LL,
                         0LL,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v61 = v53->fields.conds;
              if ( v61 )
              {
                if ( *(_QWORD *)&v61->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_39592404(this, v53, userServantEntity, v60);
                  if ( (Instance & 1) != 0 )
                  {
                    v64 = v23->fields._items;
                    v65 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v23->fields._version;
                    if ( !v64 )
                      goto LABEL_78;
                    v66 = v23->fields._size;
                    if ( (unsigned int)v66 >= v64->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v23,
                        (Il2CppObject *)v53,
                        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v67 = &v64->obj.klass + v66;
                      v23->fields._size = v66 + 1;
                      v67[4] = (Il2CppClass *)v53;
                      sub_1B76164((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v53, v62, v63);
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
        if ( (int)++v52 >= (int)v27 )
          goto LABEL_76;
      }
LABEL_79:
      sub_1B76424(Instance, v21);
    }
LABEL_76:
    if ( v23->fields._size )
    {
LABEL_37:
      v45 = (WeightRate_int__o *)sub_1B7640C(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v45, (const MethodInfo_38B2814 *)Method_WeightRate_int___ctor__);
      v46 = v23->fields._size;
      if ( v46 >= 1 )
      {
        if ( !v45 )
          goto LABEL_78;
        for ( i = 0; i != v46; ++i )
          WeightRate_int___setWeight(v45, 1, i, (const MethodInfo_38B1D30 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
      if ( (Instance & 1) != 0 || v23->fields._size < 1 )
      {
LABEL_50:
        if ( v45 )
        {
          v51 = UnityEngine_Random__Range_69247148(0, v45->fields.totalweight, 0LL);
          Data = WeightRate_int___getData(v45, v51, (const MethodInfo_38B21A4 *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v23,
                                Data,
                                (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v49 = *(_QWORD *)(Instance + 64);
          if ( !v49 )
            break;
          if ( !*(_DWORD *)(v49 + 24) )
            goto LABEL_79;
          v50 = *(_QWORD *)(v49 + 32);
          if ( !v50 )
            break;
          Instance = System_String__op_Equality(*(System_String_o **)(v50 + 16), voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v23->fields._size )
            goto LABEL_50;
        }
      }
LABEL_78:
      sub_1B7641C(Instance, v21);
    }
  }
  return (ServantVoiceData_array *)sub_1B76268(ServantVoiceData___TypeInfo, 0LL);
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
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+30h] [xbp-80h]

  if ( (byte_4A2E7A2 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v7);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A2E7A2 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v13 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_28:
    sub_1B7641C(Instance, v11);
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
          sub_1B76424(Instance, v11);
        v20 = infos->m_Items[0];
        if ( !v20 )
          goto LABEL_28;
        v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v23 = v20->fields.id;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v33, 0LL);
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
              Instance = ServantVoiceEntity__isAvailableVoice_39592404(this, v17, userServantEntity, v24);
              if ( (Instance & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_28;
                items = v13->fields._items;
                v29 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v13->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v13->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v13,
                    (Il2CppObject *)v17,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v31 = &items->obj.klass + size;
                  v13->fields._size = size + 1;
                  v31[4] = (Il2CppClass *)v17;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v17, v26, v27);
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