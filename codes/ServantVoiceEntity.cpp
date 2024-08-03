void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCC6E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCC6E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_49FCC4D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&voicePrefix);
    byte_49FCC4D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_49FCC5A & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&rankNow);
    byte_49FCC5A = 1;
  }
  v5 = sub_1B64170(int___TypeInfo, v3);
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
        sub_1B6432C(v5, v6);
      *(_DWORD *)(v5 + 32 + 4 * v8++) = 0;
    }
    while ( (int)v7 != v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1B64324(v5);
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
    sub_1B64324(this);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1B6432C(this, *(_QWORD *)&type);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_61383712(labelName, v12->fields.id, 0LL);
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
    sub_1B64324(this);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0LL;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_24:
        sub_1B6432C(this, method);
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
    return ServantVoiceEntity__getVoiceList_39440700(this, 3, labelName, 0LL, 1, v5);
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
      sub_1B64324(IsNullOrEmpty);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
        sub_1B6432C(IsNullOrEmpty, v6);
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

  if ( (byte_49FCC6D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCC6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_1B64324(Instance);
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
      sub_1B6432C(Instance, v7);
    v14 = infos->m_Items[0];
    if ( !v14 || !v9 )
      goto LABEL_16;
    summonScript = v12->fields.summonScript;
    Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v9, svtId, v14->fields.id, 0LL, -1LL, -1, 0LL, 0LL);
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

  if ( (byte_49FCC63 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cond);
    this = (ServantVoiceEntity_o *)sub_1B640C8(&VoiceCondType_TypeInfo, v15);
    byte_49FCC63 = 1;
  }
  if ( !cond )
LABEL_41:
    sub_1B64324(this);
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
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v29, 0LL);
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

  return ServantVoiceEntity__getVoiceList_39440700(this, 6, labelName, 0LL, 1, v3);
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
  __int64 v12; // x1
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
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  Il2CppObject *v30; // x1
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FCC64 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCC64 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      *(_QWORD *)&eventId,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_36:
    sub_1B64324(Instance);
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
                                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
                v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v9->fields._version;
                if ( !items )
                  goto LABEL_36;
                size = v9->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    p_obj,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                }
                else
                {
                  v29 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v29[4] = (Il2CppClass *)p_obj;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)p_obj, v13, v14);
                }
              }
            }
          }
          LODWORD(v21) = conds->max_length;
          if ( (int)++v22 >= (int)v21 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1B6432C(Instance, v12);
      }
    }
    else
    {
      if ( !v9 )
        goto LABEL_36;
      v30 = &v19->fields.infos->obj;
      v31 = v9->fields._items;
      v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v9->fields._version;
      if ( !v31 )
        goto LABEL_36;
      v33 = v9->fields._size;
      if ( (unsigned int)v33 >= v31->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v30,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &v31->obj.klass + v33;
        v9->fields._size = v33 + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v30, v13, v14);
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

  if ( (byte_49FCC50 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FCC50 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&svtId);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_1B64324(Instance);
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
          sub_1B6432C(Instance, v14);
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
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_22;
              Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                           v12,
                                           &infos->obj,
                                           (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
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
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v27 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v27[4] = (Il2CppClass *)infos;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)infos, v22, v23);
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

  if ( (byte_49FCC52 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FCC52 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&condType);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_21:
    sub_1B64324(Instance);
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
          sub_1B6432C(Instance, v13);
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
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v13;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v13, v14, v15);
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
  __int64 v7; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v9; // x9
  SvtVoiceInfo_o *v10; // x8
  il2cpp_array_size_t v12; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v14; // x22
  struct ServantVoiceData_array *infos; // x23
  int v16; // w9
  __int64 v17; // x24
  ServantVoiceData_o *v18; // x8

  v6 = this;
  if ( (byte_49FCC57 & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_1B640C8(&StringLiteral_16073/*"_B050"*/, *(_QWORD *)&type);
    byte_49FCC57 = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16073/*"_B050"*/, 0LL);
    scriptJson = v6->fields.scriptJson;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !scriptJson )
        goto LABEL_25;
      v9 = *(_QWORD *)&scriptJson->max_length;
      if ( v9 )
      {
        if ( !(_DWORD)v9 )
LABEL_28:
          sub_1B6432C(this, v7);
        v10 = scriptJson->m_Items[0];
        if ( v10 )
          return v10->fields.conds;
LABEL_25:
        sub_1B64324(this);
      }
    }
    else
    {
      if ( !scriptJson )
        goto LABEL_25;
      v12 = 0;
      while ( 1 )
      {
        max_length = scriptJson->max_length;
        if ( (int)v12 >= (int)max_length )
          break;
        if ( v12 >= max_length )
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
            v17 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v17 >= v16 )
                goto LABEL_28;
              v18 = infos->m_Items[v17];
              if ( !v18 )
                goto LABEL_25;
              this = (ServantVoiceEntity_o *)System_String__Equals_61383712(labelName, v18->fields.id, 0LL);
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
  return 0LL;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeCombineVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_39439984(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_39439984(this, 2, 23, costumeId, 0LL, -1, v3);
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
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v12; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v14; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v16; // x9
  __int64 v17; // x25
  ServantVoiceCond_o *v18; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49FCC66 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v5);
    byte_49FCC66 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1B64324(v7);
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v6;
    if ( v12 >= max_length )
LABEL_25:
      sub_1B6432C(v7, v8);
    v14 = scriptJson->m_Items[v12];
    if ( v14 )
    {
      conds = v14->fields.conds;
      if ( conds )
      {
        v16 = *(_QWORD *)&conds->max_length;
        if ( v16 )
        {
          if ( (int)v16 >= 1 )
          {
            v17 = 0LL;
            do
            {
              if ( (unsigned int)v17 >= (unsigned int)v16 )
                goto LABEL_25;
              v18 = conds->m_Items[v17];
              if ( !v18 )
                goto LABEL_23;
              if ( v18->fields.condType == 15 )
              {
                if ( !v6 )
                  goto LABEL_23;
                p_obj = &v14->fields.infos->obj;
                items = v6->fields._items;
                v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v6->fields._version;
                if ( !items )
                  goto LABEL_23;
                size = v6->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v6,
                    p_obj,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v23 = &items->obj.klass + size;
                  v6->fields._size = size + 1;
                  v23[4] = (Il2CppClass *)p_obj;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)p_obj, v9, v10);
                }
              }
              LODWORD(v16) = conds->max_length;
              ++v17;
            }
            while ( (int)v17 < (int)v16 );
            scriptJson = this->fields.scriptJson;
          }
        }
      }
      ++v12;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  DataManager_o *Time; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v15; // x21
  il2cpp_array_size_t v16; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v18; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v20; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v22; // x23
  int32_t condType; // w8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0

  if ( (byte_49FCC65 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCC65 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1B64324(Time);
  v15 = Time;
  v16 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v16 >= max_length )
LABEL_40:
      sub_1B6432C(Time, v11);
    v18 = scriptJson->m_Items[v16];
    if ( !v18 )
      goto LABEL_38;
    conds = v18->fields.conds;
    if ( conds && (v20 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v20 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v20; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v20 )
            goto LABEL_40;
          v22 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v22 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v22->fields.value,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v22->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v15 )
            {
              if ( condType != 19 && condType != 13 )
                goto LABEL_30;
            }
            else if ( condType != 19 && condType != 14 )
            {
              goto LABEL_30;
            }
            if ( !v9 )
              goto LABEL_38;
            p_obj = &v18->fields.infos->obj;
            items = v9->fields._items;
            v26 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                p_obj,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v28[4] = (Il2CppClass *)p_obj;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)p_obj, v12, v13);
            }
          }
LABEL_30:
          LODWORD(v20) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v9 )
        goto LABEL_38;
      v29 = &v18->fields.infos->obj;
      v30 = v9->fields._items;
      v31 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v9->fields._version;
      if ( !v30 )
        goto LABEL_38;
      v32 = v9->fields._size;
      if ( (unsigned int)v32 >= v30->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v29,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &v30->obj.klass + v32;
        v9->fields._size = v32 + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v29, v12, v13);
      }
    }
    ++v16;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_39451476(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39440700(this, 5, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_T__o *v26; // x20
  int64_t Time; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  System_Collections_Generic_List_T__o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v45; // w21
  il2cpp_array_size_t max_length; // w9
  Il2CppObject *v47; // x27
  _BOOL4 v48; // w24
  _QWORD *monitor; // x26
  __int64 v50; // x8
  __int64 v51; // x19
  __int64 v52; // x20
  int32_t v53; // w28
  int64_t v54; // x29
  int v55; // w8
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  _BOOL8 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *current; // x19
  _DWORD *v65; // x20
  int v66; // w8
  unsigned int v67; // w21
  __int64 v68; // x8
  Il2CppObject *klass; // x1
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_object__o *v75; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v76; // [xsp+10h] [xbp-C0h]
  int64_t v77; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v80; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_49FCC6C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, isEventDateCondOnly);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_1B640C8(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v21);
    sub_1B640C8(&NetworkManager_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_49FCC6C = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v75 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       isEventDateCondOnly,
                                                       *(_QWORD *)&eventId);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v26 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                  v24,
                                                  v25);
  System_Collections_Generic_List_Int32Enum____ctor(
    v26,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v26 )
    goto LABEL_54;
  items = v26->fields._items;
  v31 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v26->fields._size;
  v80 = v26;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v26,
      14,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    items = v26->fields._items;
    v31 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v26->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v26->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 14;
    ++v26->fields._version;
  }
  v33 = v26->fields._size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v26,
      13,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    items = v26->fields._items;
    v31 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v26->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v26->fields._size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 13;
    ++v26->fields._version;
  }
  v34 = v26->fields._size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v26,
      19,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v26->fields._size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 19;
  }
  v35 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                  v28,
                                                  v29);
  System_Collections_Generic_List_Int32Enum____ctor(
    v35,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v35 )
      goto LABEL_54;
    v38 = v35->fields._items;
    v39 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v35->fields._version;
    if ( !v38 )
      goto LABEL_54;
    v40 = v35->fields._size;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v35,
        checkCondType,
        *(const MethodInfo_34927A8 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v35->fields._size = v40 + 1;
      *((_DWORD *)v38->m_Items + v40) = checkCondType;
    }
  }
  v76 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v77 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_54;
  v45 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v45 >= (int)max_length )
      break;
    if ( v45 >= max_length )
      goto LABEL_78;
    v47 = (Il2CppObject *)scriptJson->m_Items[v45];
    if ( !v47 )
      goto LABEL_54;
    v48 = v6;
    monitor = v47[4].monitor;
    if ( monitor )
    {
      v50 = monitor[3];
      if ( v50 )
      {
        if ( (int)v50 >= 1 )
        {
          v51 = 0LL;
          while ( (unsigned int)v51 < (unsigned int)v50 )
          {
            v52 = monitor[v51 + 4];
            if ( !v52 )
              goto LABEL_54;
            v53 = *(_DWORD *)(v52 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v80,
                     v53,
                     (const MethodInfo_3492B20 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v35 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v35,
                       v53,
                       (const MethodInfo_3492B20 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v52 + 20),
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v52 + 20) != eventId )
              goto LABEL_53;
            v54 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v80,
                     v53,
                     (const MethodInfo_3492B20 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v55 = *(_QWORD *)(v54 + 96) <= v77 ? 13 : 14;
              if ( v53 == 19 )
                v55 = 19;
              if ( v53 != v55 )
                goto LABEL_53;
            }
            LODWORD(v50) = *((_DWORD *)monitor + 6);
            if ( (int)++v51 >= (int)v50 )
              goto LABEL_48;
          }
LABEL_78:
          sub_1B6432C(Time, v41);
        }
LABEL_48:
        if ( !v76 )
          goto LABEL_54;
        v56 = v76->fields._items;
        v57 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v76->fields._version;
        if ( !v56 )
          goto LABEL_54;
        v58 = v76->fields._size;
        if ( (unsigned int)v58 >= v56->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v76,
            v47,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &v56->obj.klass + v58;
          v76->fields._size = v58 + 1;
          v59[4] = (Il2CppClass *)v47;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v47, v42, v43);
        }
      }
    }
LABEL_53:
    ++v45;
    v6 = v48;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_54;
  }
  Time = (int64_t)v76;
  if ( !v76 )
LABEL_54:
    sub_1B64324(Time);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    v76,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v82 = v81;
LABEL_57:
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v60 )
      break;
    current = v82.fields._current;
    if ( !v82.fields._current )
      sub_1B64324(v60);
    v65 = v82.fields._current[4].monitor;
    if ( !v65 )
      sub_1B64324(v60);
    v66 = v65[6];
    if ( v66 >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= v66 )
          sub_1B6432C(v60, v61);
        v68 = *(_QWORD *)&v65[2 * v67 + 8];
        if ( !v68 )
          sub_1B64324(v60);
        if ( v6 )
          break;
        if ( !v35 )
          sub_1B64324(v60);
        v60 = System_Collections_Generic_List_Int32Enum___Contains(
                v35,
                *(_DWORD *)(v68 + 16),
                (const MethodInfo_3492B20 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v60 )
          break;
        v66 = v65[6];
        if ( (int)++v67 >= v66 )
          goto LABEL_57;
      }
      if ( !v75 )
        sub_1B64324(v60);
      klass = (Il2CppObject *)current[4].klass;
      v70 = v75->fields._items;
      v71 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v75->fields._version;
      if ( !v70 )
        sub_1B64324(v60);
      v72 = v75->fields._size;
      if ( (unsigned int)v72 >= v70->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v75,
          klass,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = &v70->obj.klass + v72;
        v75->fields._size = v72 + 1;
        v73[4] = (Il2CppClass *)klass;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)klass, v62, v63);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v75;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_39454312(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39440700(this, 9, labelName, 0LL, 1, v3);
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
  _BOOL8 v9; // x0
  __int64 v10; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v13; // w23
  ServantVoiceData_o *v14; // x8
  System_String_o *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FCC6A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_49FCC6A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)EventRewardVoiceList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v18 = v17;
  do
  {
LABEL_5:
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v9 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v18.fields._current;
    if ( !v18.fields._current )
      sub_1B64324(v9);
    monitor = (int)v18.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= monitor )
      sub_1B6432C(v9, v10);
    v14 = current->m_Items[v13];
    if ( !v14 )
      sub_1B64324(v9);
    v15 = v14->fields.id;
    if ( !v15 )
      sub_1B64324(0LL);
    v9 = System_String__Equals_61383712(v15, id, 0LL);
    if ( v9 )
      break;
    monitor = current->max_length;
    if ( (int)++v13 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  const MethodInfo *v9; // x5
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_49FCC5B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_1B640C8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_49FCC5B = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                 System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                 labelName,
                                                 method);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7
    || (items = v7->fields._items,
        v11 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1B64324(v8);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      81,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_39440700(
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
    return ServantVoiceEntity__getVoiceList_39440700(this, 2, labelName, 0LL, 0, v5);
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
  const MethodInfo *v9; // x5
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_49FCC5C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_1B640C8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_49FCC5C = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                 System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                 labelName,
                                                 method);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7
    || (items = v7->fields._items,
        v11 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1B64324(v8);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      81,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_39440700(
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
  System_Collections_Generic_List_object__o *v6; // x20
  _BOOL8 isQuestClearState; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v12; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v14; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v16; // x10
  __int64 v17; // x25
  char v18; // w27
  char v19; // w8
  char v20; // w9
  ServantVoiceCond_o *v21; // x10
  int32_t condType; // w11
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_49FCC67 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v5);
    byte_49FCC67 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_34;
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v6;
    if ( v12 >= max_length )
LABEL_36:
      sub_1B6432C(isQuestClearState, v8);
    v14 = scriptJson->m_Items[v12];
    if ( !v14 )
      goto LABEL_34;
    conds = v14->fields.conds;
    if ( conds )
    {
      v16 = *(_QWORD *)&conds->max_length;
      if ( v16 )
      {
        if ( (int)v16 >= 1 )
        {
          v17 = 0LL;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v17 >= (unsigned int)v16 )
              goto LABEL_36;
            v21 = conds->m_Items[v17];
            if ( !v21 )
              goto LABEL_34;
            condType = v21->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v19 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v21->fields.value,
                                        v9);
                  if ( isQuestClearState )
                    goto LABEL_33;
                  v19 = 0;
                  goto LABEL_27;
                }
                if ( (v18 & 1) == 0 )
                  goto LABEL_33;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v21->fields.value,
                                      v9);
                if ( isQuestClearState )
                  goto LABEL_33;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v21->fields.value,
                                      v9);
                if ( !isQuestClearState )
                  goto LABEL_33;
                break;
              default:
                if ( (v20 & 1) == 0 )
                  goto LABEL_33;
                goto LABEL_27;
            }
            v18 = 1;
            v19 = 1;
LABEL_27:
            LODWORD(v16) = conds->max_length;
            ++v17;
            v20 = 1;
            if ( (int)v17 >= (int)v16 )
            {
              if ( v6 )
              {
                p_obj = &v14->fields.infos->obj;
                items = v6->fields._items;
                v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v6->fields._version;
                if ( items )
                {
                  size = v6->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v6,
                      p_obj,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + size;
                    v6->fields._size = size + 1;
                    v27[4] = (Il2CppClass *)p_obj;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)p_obj, (int32_t)v9, v10);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1B64324(isQuestClearState);
            }
          }
        }
      }
    }
LABEL_33:
    scriptJson = this->fields.scriptJson;
    ++v12;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_39451988(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39440700(this, 8, labelName, 0LL, 1, v3);
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
  Il2CppObject *MasterData_object; // x22
  int32_t FriendShipRank; // w0
  int v29; // w22
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x1
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v40; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v42; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v44; // x8
  struct ServantVoiceCond_array *conds; // x8
  __int64 v46; // x9
  ServantVoiceCond_o *v47; // x10
  int v48; // w10
  ServantVoiceCond_o *v49; // x12
  int32_t condType; // w13
  bool v51; // w12
  Il2CppObject *p_obj; // x1
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  int32_t id; // w26
  int32_t v59; // w25

  if ( (byte_49FCC53 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    sub_1B640C8(&ServantLimitUpVoiceCache_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49FCC53 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&displayType);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v22 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v21);
  v24 = v22 - 1;
  if ( v22 < 1 )
    goto LABEL_11;
  v25 = v22;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v29 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v29 = v24;
      if ( isPlayVoice )
      {
        v59 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v59, 0LL);
      }
    }
  }
  else
  {
LABEL_11:
    v29 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v23);
  if ( Instance )
  {
    if ( !v20 )
      goto LABEL_68;
    v33 = *(Il2CppObject **)(Instance + 64);
    version = v20->fields._version;
    items = v20->fields._items;
    v36 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_15:
    v20->fields._version = version + 1;
    if ( !items )
      goto LABEL_68;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        v33,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v33;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v33, v31, v32);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_68;
    v40 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v40 >= (int)max_length )
        break;
      if ( v40 >= max_length )
        goto LABEL_69;
      v42 = scriptJson->m_Items[v40];
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v42 )
        goto LABEL_68;
      infos = v42->fields.infos;
      if ( !infos )
        goto LABEL_68;
      if ( !infos->max_length )
        goto LABEL_69;
      v44 = infos->m_Items[0];
      if ( !v44 || !Instance )
        goto LABEL_68;
      Instance = VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)Instance,
                   this->fields.id,
                   v44->fields.id,
                   0LL,
                   -1LL,
                   genderType,
                   0LL,
                   0LL);
      conds = v42->fields.conds;
      if ( conds )
      {
        v46 = *(_QWORD *)&conds->max_length;
        if ( v46 )
        {
          if ( !(_DWORD)v46 )
LABEL_69:
            sub_1B6432C(Instance, v30);
          v47 = conds->m_Items[0];
          if ( !v47 )
            goto LABEL_68;
          if ( v47->fields.condType != 11 )
            goto LABEL_48;
          if ( v29 != -1 && (_DWORD)v46 != 1 )
          {
            if ( (int)v46 < 1 )
              goto LABEL_48;
            v48 = 0;
            while ( 1 )
            {
              v49 = conds->m_Items[v48];
              if ( !v49 )
                goto LABEL_68;
              condType = v49->fields.condType;
              if ( condType == 20 )
              {
                v51 = v49->fields.value <= v29;
              }
              else
              {
                if ( condType == 22 && v49->fields.value >= v29 && (Instance & 1) != 0 )
                {
LABEL_50:
                  if ( v20 )
                  {
                    p_obj = &v42->fields.infos->obj;
                    v53 = v20->fields._items;
                    v54 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v20->fields._version;
                    if ( v53 )
                    {
                      v55 = v20->fields._size;
                      if ( (unsigned int)v55 >= v53->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v20,
                          p_obj,
                          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v56 = &v53->obj.klass + v55;
                        v20->fields._size = v55 + 1;
                        v56[4] = (Il2CppClass *)p_obj;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)p_obj, v31, v32);
                      }
                      goto LABEL_48;
                    }
                  }
LABEL_68:
                  sub_1B64324(Instance);
                }
                v51 = 0;
              }
              if ( (v51 & Instance & 1) != 0 )
                goto LABEL_50;
              if ( (_DWORD)v46 == ++v48 )
                goto LABEL_48;
            }
          }
          if ( (Instance & 1) == 0 )
            goto LABEL_48;
          if ( !v20 )
            goto LABEL_68;
          v33 = &v42->fields.infos->obj;
          version = v20->fields._version;
          items = v20->fields._items;
          v36 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          goto LABEL_15;
        }
      }
LABEL_48:
      scriptJson = this->fields.scriptJson;
      ++v40;
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
  _BOOL8 v9; // x0
  __int64 v10; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v13; // w23
  ServantVoiceData_o *v14; // x8
  System_String_o *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FCC6B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_49FCC6B = 1;
  }
  memset(&v18, 0, sizeof(v18));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v18 = v17;
  do
  {
LABEL_5:
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v9 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v18.fields._current;
    if ( !v18.fields._current )
      sub_1B64324(v9);
    monitor = (int)v18.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= monitor )
      sub_1B6432C(v9, v10);
    v14 = current->m_Items[v13];
    if ( !v14 )
      sub_1B64324(v9);
    v15 = v14->fields.id;
    if ( !v15 )
      sub_1B64324(0LL);
    v9 = System_String__Equals_61383712(v15, id, 0LL);
    if ( v9 )
      break;
    monitor = current->max_length;
    if ( (int)++v13 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x22
  __int64 v14; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v16; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v18; // x23
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v21; // x26
  int v22; // w9
  ServantVoiceCond_o *v23; // x8
  struct ServantVoiceData_array *v24; // x8
  ServantVoiceData_o *v25; // x8
  const MethodInfo *v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_49FCC59 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&friendShipRank);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCC59 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                             v11,
                                                             v12),
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_34:
    sub_1B64324(Instance);
  }
  v16 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    if ( v16 >= max_length )
LABEL_37:
      sub_1B6432C(Instance, v14);
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
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v18, 0, 1, v26);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_34;
                p_obj = &v18->fields.infos->obj;
                items = v13->fields._items;
                v31 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v13->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v13->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v13,
                    p_obj,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &items->obj.klass + size;
                  v13->fields._size = size + 1;
                  v33[4] = (Il2CppClass *)p_obj;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)p_obj, v27, v28);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x22
  __int64 v14; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v16; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v18; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v20; // x9
  ServantVoiceData_o *v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x4
  struct ServantVoiceCond_array *conds; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_49FCC58 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&imageLimitCount);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCC58 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                             v11,
                                                             v12),
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_25:
    sub_1B64324(Instance);
  }
  v16 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_28;
    v18 = scriptJson->m_Items[v16];
    if ( !v18 )
      goto LABEL_25;
    infos = v18->fields.infos;
    if ( infos )
    {
      v20 = *(_QWORD *)&infos->max_length;
      if ( v20 )
      {
        if ( !(_DWORD)v20 )
LABEL_28:
          sub_1B6432C(Instance, v14);
        v21 = infos->m_Items[0];
        if ( !v21 || !MasterData_object )
          goto LABEL_25;
        Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                     (VoicePlayCondMaster_o *)MasterData_object,
                                     this->fields.id,
                                     v21->fields.id,
                                     0LL,
                                     -1LL,
                                     -1,
                                     0LL,
                                     0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v18->fields.conds;
          if ( !conds )
            goto LABEL_25;
          if ( (int)conds->max_length < 1
            || (Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                             this,
                                             v18,
                                             imageLimitCount,
                                             0,
                                             v24),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v13 )
              goto LABEL_25;
            p_obj = &v18->fields.infos->obj;
            items = v13->fields._items;
            v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v13->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                p_obj,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v30[4] = (Il2CppClass *)p_obj;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)p_obj, v22, v23);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v16;
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

  return ServantVoiceEntity__getVoiceList_39440700(this, 7, labelName, 0LL, 1, v3);
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

  if ( (byte_49FCC56 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16073/*"_B050"*/, *(_QWORD *)&type);
    byte_49FCC56 = 1;
  }
  *conds = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)conds, 0, (int32_t)labelName, (int32_t)conds);
  *isInvalidVoiceList = 0;
  *overwriteName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteName, 0, v18, v19);
  *overwriteNameDefault = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteNameDefault, 0, v20, v21);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v22 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16073/*"_B050"*/, 0LL);
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
        sub_1B6432C(v22, v23);
      v28 = scriptJson->m_Items[0];
      if ( v28 )
      {
        v29 = v28->fields.conds;
        *conds = v29;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)conds, (int32_t)v29, v24, v25);
        *isInvalidVoiceList = v28->fields.isInvalidVoiceList;
        v30 = v28->fields.overwriteName;
        *overwriteName = v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)v30, v31, v32);
        v33 = v28->fields.overwriteNameDefault;
        *overwriteNameDefault = v33;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteNameDefault, (int32_t)v33, v34, v35);
        v36 = v28->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1B64324(v22);
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
    v22 = System_String__Equals_61383712(labelName, v43->fields.id, 0LL);
    if ( v22 )
      break;
    infos = v39->fields.infos;
    ++v41;
    if ( !infos )
      goto LABEL_26;
  }
  v46 = v39->fields.conds;
  *conds = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)conds, (int32_t)v46, v44, v45);
  *isInvalidVoiceList = v39->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v39->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)materialOverwriteName, v47, v48),
        System_String__IsNullOrEmpty(*overwriteName, 0LL)) )
  {
    v50 = v39->fields.overwriteName;
    *overwriteName = v50;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)v50, v47, v48);
  }
  v51 = v39->fields.overwriteNameDefault;
  *overwriteNameDefault = v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteNameDefault, (int32_t)v51, v47, v48);
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

  return ServantVoiceEntity__getVoiceList_39439984(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_39439984(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0LL), result = 0, !assetName) )
  {
    sub_1B64324(assetName);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_39436496(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_39436496(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_49FCC4E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4441/*"ChrVoice_"*/, method);
    byte_49FCC4E = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_4441/*"ChrVoice_"*/, v2, 0LL);
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v13; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v15; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FCC4F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    byte_49FCC4F = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      *(_QWORD *)&type,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1B64324(v8);
  v13 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v13 >= max_length )
      sub_1B6432C(v8, v9);
    v15 = scriptJson->m_Items[v13];
    if ( v15 )
    {
      if ( v7 )
      {
        p_obj = &v15->fields.infos->obj;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              p_obj,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v20[4] = (Il2CppClass *)p_obj;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)p_obj, v10, v11);
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
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *saveNameList; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v28; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v30; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v32; // x9
  ServantVoiceCond_o *v33; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *p_obj; // x1
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0

  if ( (byte_49FCC51 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FCC51 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&condType);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v18);
  if ( Instance )
  {
    if ( v15 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v15->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            saveNameList,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v26[4] = (Il2CppClass *)saveNameList;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)saveNameList, v20, v21);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
      }
    }
LABEL_32:
    sub_1B64324(Instance);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v28 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v28 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( (unsigned int)v28 >= max_length )
      goto LABEL_35;
    v30 = scriptJson->m_Items[v28];
    if ( !v30 )
      goto LABEL_32;
    conds = v30->fields.conds;
    if ( conds )
    {
      v32 = *(_QWORD *)&conds->max_length;
      if ( v32 )
      {
        if ( !(_DWORD)v32 )
          goto LABEL_35;
        v33 = conds->m_Items[0];
        if ( !v33 )
          goto LABEL_32;
        if ( v33->fields.condType == condType )
        {
          infos = v30->fields.infos;
          if ( !infos )
            goto LABEL_32;
          if ( !infos->max_length )
LABEL_35:
            sub_1B6432C(Instance, v19);
          v35 = infos->m_Items[0];
          if ( !v35 || !MasterData_object )
            goto LABEL_32;
          Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                        (VoicePlayCondMaster_o *)MasterData_object,
                                        this->fields.id,
                                        v35->fields.id,
                                        0LL,
                                        -1LL,
                                        genderType,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_32;
            p_obj = &v30->fields.infos->obj;
            v39 = v15->fields._items;
            v40 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v15->fields._version;
            if ( !v39 )
              goto LABEL_32;
            v41 = v15->fields._size;
            if ( (unsigned int)v41 >= v39->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                p_obj,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &v39->obj.klass + v41;
              v15->fields._size = v41 + 1;
              v42[4] = (Il2CppClass *)p_obj;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)p_obj, v36, v37);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v28;
    if ( !scriptJson )
      goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_39439984(
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
  Il2CppObject *MasterData_object; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x23
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *saveNameList; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v32; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v34; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v36; // x28
  int v37; // w8
  ServantVoiceCond_o *v38; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v40; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0

  if ( (byte_49FCC54 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FCC54 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v22);
  if ( Instance )
  {
    if ( v21 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v21->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v21->fields._version;
      if ( items )
      {
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            saveNameList,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v30[4] = (Il2CppClass *)saveNameList;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)saveNameList, v24, v25);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v21;
      }
    }
LABEL_40:
    sub_1B64324(Instance);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v32 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v32 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v21;
    if ( v32 >= max_length )
LABEL_43:
      sub_1B6432C(Instance, v23);
    v34 = scriptJson->m_Items[v32];
    if ( v34 )
    {
      conds = v34->fields.conds;
      if ( conds )
      {
        v36 = 0LL;
        while ( 1 )
        {
          v37 = conds->max_length;
          if ( (int)v36 >= v37 )
            break;
          if ( (unsigned int)v36 >= v37 )
            goto LABEL_43;
          v38 = conds->m_Items[v36];
          if ( !v38 )
            goto LABEL_40;
          if ( v38->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_46;
            if ( v38->fields.value == condValue )
            {
              infos = v34->fields.infos;
              if ( !infos )
                goto LABEL_40;
              if ( !infos->max_length )
                goto LABEL_43;
              v40 = infos->m_Items[0];
              if ( !v40 || !MasterData_object )
                goto LABEL_40;
              Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                            (VoicePlayCondMaster_o *)MasterData_object,
                                            this->fields.id,
                                            v40->fields.id,
                                            0LL,
                                            -1LL,
                                            genderType,
                                            0LL,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_46:
                if ( !v21 )
                  goto LABEL_40;
                p_obj = &v34->fields.infos->obj;
                v42 = v21->fields._items;
                v43 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v21->fields._version;
                if ( !v42 )
                  goto LABEL_40;
                v44 = v21->fields._size;
                if ( (unsigned int)v44 >= v42->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    p_obj,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                }
                else
                {
                  v45 = &v42->obj.klass + v44;
                  v21->fields._size = v44 + 1;
                  v45[4] = (Il2CppClass *)p_obj;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)p_obj, v24, v25);
                }
              }
            }
          }
          conds = v34->fields.conds;
          ++v36;
          if ( !conds )
            goto LABEL_40;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v32;
    if ( !scriptJson )
      goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_39440700(
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
  Il2CppObject *MasterData_object; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v25; // x9
  SvtVoiceInfo_o *v26; // x8
  Il2CppObject *p_obj; // x1
  il2cpp_array_size_t v28; // w26
  _BOOL4 v29; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v31; // x25
  struct ServantVoiceData_array *infos; // x9
  __int64 v33; // x27
  int v34; // w8
  ServantVoiceData_o *v35; // x28
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_49FCC55 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&StringLiteral_16073/*"_B050"*/, v15);
    byte_49FCC55 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16073/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !scriptJson )
      goto LABEL_43;
    v28 = 0;
    v29 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v28 >= (int)max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
      if ( v28 >= max_length )
        goto LABEL_44;
      v31 = scriptJson->m_Items[v28];
      if ( !v31 )
        goto LABEL_43;
      infos = v31->fields.infos;
      if ( !infos )
        goto LABEL_34;
      v33 = 0LL;
      while ( 1 )
      {
        v34 = infos->max_length;
        if ( (int)v33 >= v34 )
          break;
        if ( (unsigned int)v33 >= v34 )
          goto LABEL_44;
        v35 = infos->m_Items[v33];
        if ( !v35 )
          goto LABEL_43;
        Instance = (Il2CppObject *)System_String__Equals_61383712(labelName, v35->fields.id, 0LL);
        if ( v29 )
        {
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_31;
          if ( !MasterData_object )
            goto LABEL_43;
          Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                       (VoicePlayCondMaster_o *)MasterData_object,
                                       this->fields.id,
                                       v35->fields.id,
                                       disableCondTypeList,
                                       -1LL,
                                       -1,
                                       0LL,
                                       0LL);
        }
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v20 )
          {
            p_obj = &v31->fields.infos->obj;
LABEL_38:
            items = v20->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v20->fields._version;
            if ( items )
            {
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  p_obj,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)p_obj;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)p_obj, v22, v23);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
            }
          }
LABEL_43:
          sub_1B64324(Instance);
        }
LABEL_31:
        infos = v31->fields.infos;
        ++v33;
        if ( !infos )
          goto LABEL_43;
      }
      scriptJson = this->fields.scriptJson;
LABEL_34:
      ++v28;
      if ( !scriptJson )
        goto LABEL_43;
    }
  }
  if ( !scriptJson )
    goto LABEL_43;
  v25 = *(_QWORD *)&scriptJson->max_length;
  if ( !v25 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
  if ( !(_DWORD)v25 )
LABEL_44:
    sub_1B6432C(Instance, v21);
  v26 = scriptJson->m_Items[0];
  if ( !v26 )
    goto LABEL_43;
  p_obj = &v26->fields.infos->obj;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( v20 )
      goto LABEL_38;
    goto LABEL_43;
  }
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
  UserGameEntity_o *SelfUserGame; // x21
  UserServantEntity_array *Instance; // x0
  UserServantMaster_o *v14; // x22
  Il2CppObject *Entity; // x21
  UserServantEntity_array *v16; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
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

  if ( (byte_49FCC62 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&VoiceCondType_TypeInfo, v11);
    byte_49FCC62 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v14 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v14, 0LL),
        !Entity)
    || (v16 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v18),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_22:
    sub_1B64324(Instance);
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
      sub_1B6432C(Instance, v19);
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
                                              v16,
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
  Il2CppObject *Entity; // x2
  const MethodInfo *v11; // x3

  if ( (byte_49FCC60 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCC60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_39447236(this, info, (UserServantEntity_o *)Entity, v11);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_39447236(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v12; // x2
  __int64 v13; // x1
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

  if ( (byte_49FCC61 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&VoiceCondType_TypeInfo, v8);
    byte_49FCC61 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_25;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_26;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (Il2CppObject *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v12);
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
      sub_1B6432C(Instance, v13);
    v18 = conds->m_Items[v17];
    if ( !v18 )
LABEL_26:
      sub_1B64324(Instance);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCC69 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCC69 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (__int64)entity[6].klass <= time;
LABEL_9:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCC68 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCC68 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_1B64324(Instance);
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
  Il2CppObject *Entity; // x1
  const MethodInfo *v11; // x3

  if ( (byte_49FCC5D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FCC5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_39445224(this, (UserServantEntity_o *)Entity, voiceId, v11);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_39445224(
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
  Il2CppObject *MasterData_object; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v28; // x29
  UserServantEntity_Fields *p_fields; // x27
  __int64 v30; // x9
  SvtVoiceInfo_o *v31; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v33; // x9
  ServantVoiceData_o *v34; // x8
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  ServantVoiceData_o *v40; // x8
  __int128 v41; // q1
  int32_t id; // w25
  System_String_o *v43; // x26
  const MethodInfo *v44; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v47; // x21
  int v48; // w23
  int32_t i; // w22
  int32_t Data; // w22
  __int64 v51; // x8
  __int64 v52; // x8
  int32_t v53; // w0
  unsigned int v54; // w29
  SvtVoiceInfo_o *v55; // x24
  struct ServantVoiceData_array *v56; // x8
  __int64 v57; // x9
  ServantVoiceData_o *v58; // x8
  __int128 v59; // q1
  int32_t v60; // w25
  System_String_o *v61; // x26
  const MethodInfo *v62; // x3
  struct ServantVoiceCond_array *v63; // x8
  int32_t v64; // w3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-80h]

  if ( (byte_49FCC5F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&ServantVoiceData___TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v15);
    sub_1B640C8(&Method_WeightRate_int__getData__, v16);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v17);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v18);
    sub_1B640C8(&WeightRate_int__TypeInfo, v19);
    byte_49FCC5F = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_78;
  v28 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v30 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v28 >= (int)v30 )
      break;
    if ( (unsigned int)v28 >= (unsigned int)v30 )
      goto LABEL_79;
    v31 = scriptJson->m_Items[v28];
    if ( !v31 )
      goto LABEL_78;
    infos = v31->fields.infos;
    if ( infos )
    {
      v33 = *(_QWORD *)&infos->max_length;
      if ( v33 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v33 )
            goto LABEL_79;
          v34 = infos->m_Items[0];
          if ( !v34 )
            goto LABEL_78;
          Instance = System_String__op_Equality(v34->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v33 )
            goto LABEL_79;
          v40 = infos->m_Items[0];
          if ( !v40 )
            goto LABEL_78;
          v41 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v43 = v40->fields.id;
          *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v71.fields.fakeValue = v41;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v70 = v71;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v70, 0LL);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v43,
                       0LL,
                       Instance,
                       -1,
                       0LL,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v31->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_39447236(this, v31, userServantEntity, v44);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v24 )
                    goto LABEL_78;
                  items = v24->fields._items;
                  v37 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v24->fields._version;
                  if ( !items )
                    goto LABEL_78;
                  size = v24->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v24,
                      (Il2CppObject *)v31,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v39 = &items->obj.klass + size;
                    v24->fields._size = size + 1;
                    v39[4] = (Il2CppClass *)v31;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v31, v26, v35);
                  }
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
      goto LABEL_78;
  }
  if ( !v24 )
    goto LABEL_78;
  if ( v24->fields._size )
    goto LABEL_37;
  if ( voiceId )
  {
    if ( (int)v30 >= 1 )
    {
      v54 = 0;
      while ( v54 < (unsigned int)v30 )
      {
        v55 = scriptJson->m_Items[v54];
        if ( !v55 )
          goto LABEL_78;
        v56 = v55->fields.infos;
        if ( v56 )
        {
          v57 = *(_QWORD *)&v56->max_length;
          if ( v57 )
          {
            if ( !(_DWORD)v57 )
              break;
            v58 = v56->m_Items[0];
            if ( !v58 )
              goto LABEL_78;
            v59 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v60 = this->fields.id;
            v61 = v58->fields.id;
            *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v71.fields.fakeValue = v59;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v69 = v71;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v69, 0LL);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v60,
                         v61,
                         0LL,
                         Instance,
                         -1,
                         0LL,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v63 = v55->fields.conds;
              if ( v63 )
              {
                if ( *(_QWORD *)&v63->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_39447236(this, v55, userServantEntity, v62);
                  if ( (Instance & 1) != 0 )
                  {
                    v65 = v24->fields._items;
                    v66 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v24->fields._version;
                    if ( !v65 )
                      goto LABEL_78;
                    v67 = v24->fields._size;
                    if ( (unsigned int)v67 >= v65->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v24,
                        (Il2CppObject *)v55,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v68 = &v65->obj.klass + v67;
                      v24->fields._size = v67 + 1;
                      v68[4] = (Il2CppClass *)v55;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v55, v26, v64);
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
        LODWORD(v30) = scriptJson->max_length;
        if ( (int)++v54 >= (int)v30 )
          goto LABEL_76;
      }
LABEL_79:
      sub_1B6432C(Instance, v25);
    }
LABEL_76:
    if ( v24->fields._size )
    {
LABEL_37:
      v47 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v25, v26);
      WeightRate_int____ctor(v47, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
      v48 = v24->fields._size;
      if ( v48 >= 1 )
      {
        if ( !v47 )
          goto LABEL_78;
        for ( i = 0; i != v48; ++i )
          WeightRate_int___setWeight(v47, 1, i, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
      if ( (Instance & 1) != 0 || v24->fields._size < 1 )
      {
LABEL_50:
        if ( v47 )
        {
          v53 = UnityEngine_Random__Range_69087476(0, v47->fields.totalweight, 0LL);
          Data = WeightRate_int___getData(v47, v53, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v24,
                                Data,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                v24,
                                Data,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v51 = *(_QWORD *)(Instance + 64);
          if ( !v51 )
            break;
          if ( !*(_DWORD *)(v51 + 24) )
            goto LABEL_79;
          v52 = *(_QWORD *)(v51 + 32);
          if ( !v52 )
            break;
          Instance = System_String__op_Equality(*(System_String_o **)(v52 + 16), voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v24->fields._size )
            goto LABEL_50;
        }
      }
LABEL_78:
      sub_1B64324(Instance);
    }
  }
  return (ServantVoiceData_array *)sub_1B64170(ServantVoiceData___TypeInfo, 0LL);
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
  Il2CppObject *MasterData_object; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v17; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v19; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v21; // x9
  ServantVoiceData_o *v22; // x8
  __int128 v23; // q1
  int32_t id; // w24
  System_String_o *v25; // x25
  const MethodInfo *v26; // x3
  struct ServantVoiceCond_array *conds; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-80h]

  if ( (byte_49FCC5E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCC5E = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                             v12,
                                                             v13),
        System_Collections_Generic_List_object____ctor(
          v14,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_28:
    sub_1B64324(Instance);
  }
  v17 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v14;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_31;
    v19 = scriptJson->m_Items[v17];
    if ( !v19 )
      goto LABEL_28;
    infos = v19->fields.infos;
    if ( infos )
    {
      v21 = *(_QWORD *)&infos->max_length;
      if ( v21 )
      {
        if ( !(_DWORD)v21 )
LABEL_31:
          sub_1B6432C(Instance, v15);
        v22 = infos->m_Items[0];
        if ( !v22 )
          goto LABEL_28;
        v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v25 = v22->fields.id;
        *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v36.fields.fakeValue = v23;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v36;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v35, 0LL);
        if ( !MasterData_object )
          goto LABEL_28;
        Instance = VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     id,
                     v25,
                     0LL,
                     Instance,
                     -1,
                     0LL,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v19->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_39447236(this, v19, userServantEntity, v26);
              if ( (Instance & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_28;
                items = v14->fields._items;
                v31 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v14->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v14->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v14,
                    (Il2CppObject *)v19,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &items->obj.klass + size;
                  v14->fields._size = size + 1;
                  v33[4] = (Il2CppClass *)v19;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v19, v28, v29);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v17;
    if ( !scriptJson )
      goto LABEL_28;
  }
}