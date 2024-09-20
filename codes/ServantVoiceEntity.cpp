void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B9E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B9E0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4A5B9BF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B9BF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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

  if ( (byte_4A5B9CC & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5B9CC = 1;
  }
  v5 = sub_1B88658(int___TypeInfo, (unsigned int)rankNow);
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
        sub_1B88814(v5, v6);
      *(_DWORD *)(v5 + 32 + 4 * v8++) = 0;
    }
    while ( (int)v7 != v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1B8880C(v5, v6);
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
    sub_1B8880C(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1B88814(this, *(_QWORD *)&type);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_61715348(labelName, v12->fields.id, 0LL);
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
    sub_1B8880C(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0LL;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_24:
        sub_1B88814(this, method);
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
    return ServantVoiceEntity__getVoiceList_39770596(this, 3, labelName, 0LL, 1, v5);
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
      sub_1B8880C(IsNullOrEmpty, v6);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
        sub_1B88814(IsNullOrEmpty, v6);
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

  if ( (byte_4A5B9DF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(Instance, v6);
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
LABEL_19:
      sub_1B88814(Instance, v6);
    v13 = infos->m_Items[0];
    if ( !v13 || !v8 )
      goto LABEL_16;
    summonScript = v11->fields.summonScript;
    Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v8, svtId, v13->fields.id, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (Il2CppObject *)System_String__IsNullOrEmpty(summonScript, 0LL);
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
  int32_t condType; // w22
  int32_t v16; // w19
  int32_t v17; // w2
  int32_t v18; // w0
  int32_t v19; // w1
  int32_t value; // w19
  int32_t v21; // w19
  int32_t v23; // w20
  int32_t v24; // w20
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5B9D5 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantVoiceEntity_o *)sub_1B885B0(&VoiceCondType_TypeInfo);
    byte_4A5B9D5 = 1;
  }
  if ( !cond )
LABEL_41:
    sub_1B8880C(this, cond);
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
        v18 = 20;
      }
      else
      {
        if ( friendshipRankWithVoice == -1 )
          return 0;
        value = cond->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v18 = 3;
      }
LABEL_38:
      v19 = value;
      v17 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v17, 0LL);
    case 4:
      v23 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfySvtGetCondition(v23, usrSvtList, 0LL);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_41;
      v24 = cond->fields.value;
      v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v26;
      *(_QWORD *)&v28.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfySvtGroupCondition(v24, v27, usrSvtList, 0LL);
    case 6:
    case 7:
    case 12:
      v16 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v17 = -1;
      v18 = condType;
      v19 = v16;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v17, 0LL);
    case 9:
    case 17:
      if ( !userSvtEntity )
        goto LABEL_41;
      value = cond->fields.value;
      friendshipRankWithVoice = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v18 = condType;
      goto LABEL_38;
    case 20:
    case 22:
      v21 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v18 = condType;
      v19 = v21;
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

  return ServantVoiceEntity__getVoiceList_39770596(this, 6, labelName, 0LL, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBoxGachaVoiceList(
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  il2cpp_array_size_t v11; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v13; // x28
  struct ServantVoiceCond_array *conds; // x29
  __int64 v15; // x8
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

  if ( (byte_4A5B9D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9D6 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_36:
    sub_1B8880C(Instance, p_obj);
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
    if ( conds && (v15 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v15 >= 1 )
      {
        v16 = 0LL;
        while ( (unsigned int)v16 < (unsigned int)v15 )
        {
          v17 = conds->m_Items[v16];
          if ( !v17 || !v10 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v10,
                                       &entity,
                                       v17->fields.value,
                                       (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                }
                else
                {
                  v22 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v22[4] = (Il2CppClass *)p_obj;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)p_obj, v7, v8);
                }
              }
            }
          }
          LODWORD(v15) = conds->max_length;
          if ( (int)++v16 >= (int)v15 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1B88814(Instance, p_obj);
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
      if ( (unsigned int)v25 >= v23->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          p_obj,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &v23->obj.klass + v25;
        v3->fields._size = v25 + 1;
        v26[4] = (Il2CppClass *)p_obj;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)p_obj, v7, v8);
      }
    }
LABEL_35:
    ++v11;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCondClearVoiceList(
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
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5B9C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9C2 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(Instance, v9);
  }
  v11 = (VoicePlayCondMaster_o *)Instance;
  v12 = 0LL;
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
        if ( !infos->max_length )
LABEL_25:
          sub_1B88814(Instance, v9);
        v16 = infos->m_Items[0];
        if ( v16 )
        {
          if ( v11 )
          {
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         v11,
                                         svtId,
                                         v16->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL,
                                         0LL,
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_22;
              Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                           v7,
                                           &infos->obj,
                                           (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                items = v7->fields._items;
                v20 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v7->fields._version;
                if ( !items )
                  goto LABEL_22;
                size = v7->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    &infos->obj,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                }
                else
                {
                  v22 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v22[4] = (Il2CppClass *)infos;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)infos, v17, v18);
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


System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__getCondVoiceList(
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

  if ( (byte_4A5B9C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9C4 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_21:
    sub_1B8880C(Instance, v9);
  }
  v13 = 0LL;
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
          sub_1B88814(Instance, v9);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v9,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v9;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v9, v10, v11);
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
  if ( (byte_4A5B9C9 & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_1B885B0(&StringLiteral_16142/*"_B050"*/);
    byte_4A5B9C9 = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16142/*"_B050"*/, 0LL);
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
          sub_1B88814(this, *(_QWORD *)&type);
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_1B8880C(this, *(_QWORD *)&type);
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
              this = (ServantVoiceEntity_o *)System_String__Equals_61715348(labelName, v17->fields.id, 0LL);
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

  return ServantVoiceEntity__getVoiceList_39769868(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_39769868(this, 2, 23, costumeId, 0LL, -1, v3);
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
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x0
  Il2CppObject *p_obj; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v9; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v13; // x9
  __int64 v14; // x25
  ServantVoiceCond_o *v15; // x8
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5B9D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4A5B9D8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1B8880C(v4, p_obj);
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v9 >= max_length )
LABEL_25:
      sub_1B88814(v4, p_obj);
    v11 = scriptJson->m_Items[v9];
    if ( v11 )
    {
      conds = v11->fields.conds;
      if ( conds )
      {
        v13 = *(_QWORD *)&conds->max_length;
        if ( v13 )
        {
          if ( (int)v13 >= 1 )
          {
            v14 = 0LL;
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
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                }
                else
                {
                  v19 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v19[4] = (Il2CppClass *)p_obj;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)p_obj, v6, v7);
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x20
  DataManager_o *Time; // x0
  Il2CppObject *p_obj; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v8; // x21
  il2cpp_array_size_t v9; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v11; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v13; // x8
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

  if ( (byte_4A5B9D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9D7 = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1B8880C(Time, p_obj);
  v8 = Time;
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v2;
    if ( v9 >= max_length )
LABEL_40:
      sub_1B88814(Time, p_obj);
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_38;
    conds = v11->fields.conds;
    if ( conds && (v13 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v13 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v13; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v13 )
            goto LABEL_40;
          v15 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v15 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v15->fields.value,
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v2,
                p_obj,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v2->fields._size = size + 1;
              v20[4] = (Il2CppClass *)p_obj;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)p_obj, v5, v6);
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
      if ( (unsigned int)v23 >= v21->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          p_obj,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &v21->obj.klass + v23;
        v2->fields._size = v23 + 1;
        v24[4] = (Il2CppClass *)p_obj;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)p_obj, v5, v6);
      }
    }
    ++v9;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_39781420(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39770596(this, 5, labelName, 0LL, 1, v3);
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v22; // w21
  il2cpp_array_size_t max_length; // w9
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
  int32_t v39; // w2
  int32_t v40; // w3
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
  if ( (byte_4A5B9DE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9DE = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v52 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v7 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v7 )
    goto LABEL_54;
  items = v7->fields._items;
  v11 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v7->fields._size;
  v57 = v7;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      14,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      13,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      19,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 19;
  }
  v15 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v15,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
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
    if ( (unsigned int)v18 >= v16->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v15,
        checkCondType,
        *(const MethodInfo_34E303C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = v18 + 1;
      *((_DWORD *)v16->m_Items + v18) = checkCondType;
    }
  }
  v53 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
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
          v28 = 0LL;
          while ( (unsigned int)v28 < (unsigned int)v27 )
          {
            v29 = monitor[v28 + 4];
            if ( !v29 )
              goto LABEL_54;
            v30 = *(_DWORD *)(v29 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v57,
                     v30,
                     (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v15 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v15,
                       v30,
                       (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v29 + 20),
                              (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v29 + 20) != eventId )
              goto LABEL_53;
            v31 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v57,
                     v30,
                     (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
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
          sub_1B88814(Time, v9);
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
        if ( (unsigned int)v35 >= v33->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            v24,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &v33->obj.klass + v35;
          v53->fields._size = v35 + 1;
          v36[4] = (Il2CppClass *)v24;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v24, v19, v20);
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
    sub_1B8880C(Time, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v53,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v59 = v58;
LABEL_57:
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v37 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1B8880C(v37, v38);
    v42 = v59.fields._current[4].monitor;
    if ( !v42 )
      sub_1B8880C(v37, v38);
    v43 = v42[6];
    if ( v43 >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= v43 )
          sub_1B88814(v37, v38);
        v45 = *(_QWORD *)&v42[2 * v44 + 8];
        if ( !v45 )
          sub_1B8880C(v37, v38);
        if ( v6 )
          break;
        if ( !v15 )
          sub_1B8880C(v37, v38);
        v37 = System_Collections_Generic_List_Int32Enum___Contains(
                v15,
                *(_DWORD *)(v45 + 16),
                (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v37 )
          break;
        v43 = v42[6];
        if ( (int)++v44 >= v43 )
          goto LABEL_57;
      }
      if ( !v52 )
        sub_1B8880C(v37, v38);
      klass = (Il2CppObject *)current[4].klass;
      v47 = v52->fields._items;
      v48 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v52->fields._version;
      if ( !v47 )
        sub_1B8880C(v37, klass);
      v49 = v52->fields._size;
      if ( (unsigned int)v49 >= v47->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          klass,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &v47->obj.klass + v49;
        v52->fields._size = v49 + 1;
        v50[4] = (Il2CppClass *)klass;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)klass, v39, v40);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v52;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_39784256(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39770596(this, 9, labelName, 0LL, 1, v3);
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
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v11; // w23
  ServantVoiceData_o *v12; // x8
  System_String_o *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5B9DC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4A5B9DC = 1;
  }
  memset(&v16, 0, sizeof(v16));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)EventRewardVoiceList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  do
  {
LABEL_5:
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v7 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v7, v8);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
      sub_1B88814(v7, v8);
    v12 = current->m_Items[v11];
    if ( !v12 )
      sub_1B8880C(v7, v8);
    v13 = v12->fields.id;
    if ( !v13 )
      sub_1B8880C(0LL, v8);
    v7 = System_String__Equals_61715348(v13, id, 0LL);
    if ( v7 )
      break;
    monitor = current->max_length;
    if ( (int)++v11 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_Collections_Generic_List_T__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4A5B9CD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4A5B9CD = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1B8880C(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_39770596(
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
    return ServantVoiceEntity__getVoiceList_39770596(this, 2, labelName, 0LL, 0, v5);
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
  System_Collections_Generic_List_T__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4A5B9CE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4A5B9CE = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1B8880C(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_39770596(
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
  System_Collections_Generic_List_object__o *v3; // x20
  _BOOL8 isQuestClearState; // x0
  Il2CppObject *p_obj; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v9; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v13; // x10
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

  if ( (byte_4A5B9D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4A5B9D9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
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
      sub_1B88814(isQuestClearState, p_obj);
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_34;
    conds = v11->fields.conds;
    if ( conds )
    {
      v13 = *(_QWORD *)&conds->max_length;
      if ( v13 )
      {
        if ( (int)v13 >= 1 )
        {
          v14 = 0LL;
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
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v3,
                      p_obj,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v23 = &items->obj.klass + size;
                    v3->fields._size = size + 1;
                    v23[4] = (Il2CppClass *)p_obj;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)p_obj, (int32_t)v6, v7);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1B8880C(isQuestClearState, p_obj);
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantVoiceEntity__getVoiceList(this, 8, v2);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_39781932(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39770596(this, 8, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_object__o *v13; // x19
  const MethodInfo *v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  int v17; // w27
  int32_t v18; // w26
  int64_t Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t FriendShipRank; // w0
  int v23; // w22
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v32; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v34; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v36; // x8
  struct ServantVoiceCond_array *conds; // x8
  __int64 v38; // x9
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

  if ( (byte_4A5B9C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantLimitUpVoiceCache_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9C5 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v15 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v14);
  v17 = v15 - 1;
  if ( v15 < 1 )
    goto LABEL_11;
  v18 = v15;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( FriendShipRank >= v18 )
  {
    v23 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v23 = v17;
      if ( isPlayVoice )
      {
        v50 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v50, 0LL);
      }
    }
  }
  else
  {
LABEL_11:
    v23 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v16);
  if ( Instance )
  {
    if ( !v13 )
      goto LABEL_68;
    p_obj = *(Il2CppObject **)(Instance + 64);
    version = v13->fields._version;
    items = v13->fields._items;
    v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_15:
    v13->fields._version = version + 1;
    if ( !items )
      goto LABEL_68;
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        p_obj,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v30[4] = (Il2CppClass *)p_obj;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)p_obj, v24, v25);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_68;
    v32 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v32 >= (int)max_length )
        break;
      if ( v32 >= max_length )
        goto LABEL_69;
      v34 = scriptJson->m_Items[v32];
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v34 )
        goto LABEL_68;
      infos = v34->fields.infos;
      if ( !infos )
        goto LABEL_68;
      if ( !infos->max_length )
        goto LABEL_69;
      v36 = infos->m_Items[0];
      if ( !v36 || !Instance )
        goto LABEL_68;
      Instance = VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)Instance,
                   this->fields.id,
                   v36->fields.id,
                   0LL,
                   -1LL,
                   genderType,
                   0LL,
                   0LL,
                   0LL);
      conds = v34->fields.conds;
      if ( conds )
      {
        v38 = *(_QWORD *)&conds->max_length;
        if ( v38 )
        {
          if ( !(_DWORD)v38 )
LABEL_69:
            sub_1B88814(Instance, p_obj);
          v39 = conds->m_Items[0];
          if ( !v39 )
            goto LABEL_68;
          if ( v39->fields.condType != 11 )
            goto LABEL_48;
          if ( v23 != -1 && (_DWORD)v38 != 1 )
          {
            if ( (int)v38 < 1 )
              goto LABEL_48;
            v40 = 0;
            while ( 1 )
            {
              v41 = conds->m_Items[v40];
              if ( !v41 )
                goto LABEL_68;
              condType = v41->fields.condType;
              if ( condType == 20 )
              {
                v43 = v41->fields.value <= v23;
              }
              else
              {
                if ( condType == 22 && v41->fields.value >= v23 && (Instance & 1) != 0 )
                {
LABEL_50:
                  if ( v13 )
                  {
                    p_obj = &v34->fields.infos->obj;
                    v44 = v13->fields._items;
                    v45 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v13->fields._version;
                    if ( v44 )
                    {
                      v46 = v13->fields._size;
                      if ( (unsigned int)v46 >= v44->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v13,
                          p_obj,
                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v47 = &v44->obj.klass + v46;
                        v13->fields._size = v46 + 1;
                        v47[4] = (Il2CppClass *)p_obj;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)p_obj, v24, v25);
                      }
                      goto LABEL_48;
                    }
                  }
LABEL_68:
                  sub_1B8880C(Instance, p_obj);
                }
                v43 = 0;
              }
              if ( (v43 & Instance & 1) != 0 )
                goto LABEL_50;
              if ( (_DWORD)v38 == ++v40 )
                goto LABEL_48;
            }
          }
          if ( (Instance & 1) == 0 )
            goto LABEL_48;
          if ( !v13 )
            goto LABEL_68;
          p_obj = &v34->fields.infos->obj;
          version = v13->fields._version;
          items = v13->fields._items;
          v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          goto LABEL_15;
        }
      }
LABEL_48:
      scriptJson = this->fields.scriptJson;
      ++v32;
      if ( !scriptJson )
        goto LABEL_68;
    }
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__getMstMissionVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v11; // w23
  ServantVoiceData_o *v12; // x8
  System_String_o *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5B9DD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4A5B9DD = 1;
  }
  memset(&v16, 0, sizeof(v16));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  do
  {
LABEL_5:
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v7 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v7, v8);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
      sub_1B88814(v7, v8);
    v12 = current->m_Items[v11];
    if ( !v12 )
      sub_1B8880C(v7, v8);
    v13 = v12->fields.id;
    if ( !v13 )
      sub_1B8880C(0LL, v8);
    v7 = System_String__Equals_61715348(v13, id, 0LL);
    if ( v7 )
      break;
    monitor = current->max_length;
    if ( (int)++v11 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return current;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v8; // x22
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
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A5B9CB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9CB = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_34:
    sub_1B8880C(Instance, p_obj);
  }
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v10 >= max_length )
LABEL_37:
      sub_1B88814(Instance, p_obj);
    v12 = scriptJson->m_Items[v10];
    if ( v12 )
    {
      infos = v12->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v12->fields.conds;
        if ( !conds )
          goto LABEL_34;
        v15 = 0LL;
        while ( 1 )
        {
          v16 = conds->max_length;
          if ( (int)v15 >= v16 )
            break;
          if ( (unsigned int)v15 >= v16 )
            goto LABEL_37;
          v17 = conds->m_Items[v15];
          if ( !v17 )
            goto LABEL_34;
          if ( v17->fields.condType == 3 && v17->fields.value == friendShipRank )
          {
            v18 = v12->fields.infos;
            if ( !v18 )
              goto LABEL_34;
            if ( !v18->max_length )
              goto LABEL_37;
            v19 = v18->m_Items[0];
            if ( !v19 || !MasterData_object )
              goto LABEL_34;
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
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v12, 0, 1, v20);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v8 )
                  goto LABEL_34;
                p_obj = &v12->fields.infos->obj;
                items = v8->fields._items;
                v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v8->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    p_obj,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)p_obj;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)p_obj, v21, v22);
                }
              }
            }
          }
          conds = v12->fields.conds;
          ++v15;
          if ( !conds )
            goto LABEL_34;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v10;
      if ( scriptJson )
        continue;
    }
    goto LABEL_34;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomVoiceList(
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
  __int64 v14; // x9
  ServantVoiceData_o *v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x4
  struct ServantVoiceCond_array *conds; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A5B9CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9CA = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_25:
    sub_1B8880C(Instance, p_obj);
  }
  v10 = 0LL;
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
      v14 = *(_QWORD *)&infos->max_length;
      if ( v14 )
      {
        if ( !(_DWORD)v14 )
LABEL_28:
          sub_1B88814(Instance, p_obj);
        v15 = infos->m_Items[0];
        if ( !v15 || !MasterData_object )
          goto LABEL_25;
        Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                     (VoicePlayCondMaster_o *)MasterData_object,
                                     this->fields.id,
                                     v15->fields.id,
                                     0LL,
                                     -1LL,
                                     -1,
                                     0LL,
                                     0LL,
                                     0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v12->fields.conds;
          if ( !conds )
            goto LABEL_25;
          if ( (int)conds->max_length < 1
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
            p_obj = &v12->fields.infos->obj;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                p_obj,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)p_obj;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)p_obj, v16, v17);
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getNpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_39770596(this, 7, labelName, 0LL, 1, v3);
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

  if ( (byte_4A5B9C8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16142/*"_B050"*/);
    byte_4A5B9C8 = 1;
  }
  *conds = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)conds, 0, (int32_t)labelName, (int32_t)conds);
  *isInvalidVoiceList = 0;
  *overwriteName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteName, 0, v18, v19);
  *overwriteNameDefault = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteNameDefault, 0, v20, v21);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v22 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16142/*"_B050"*/, 0LL);
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
        sub_1B88814(v22, v23);
      v28 = scriptJson->m_Items[0];
      if ( v28 )
      {
        v29 = v28->fields.conds;
        *conds = v29;
        sub_1B88554((ServantStatusBattleListViewItem_o *)conds, (int32_t)v29, v24, v25);
        *isInvalidVoiceList = v28->fields.isInvalidVoiceList;
        v30 = v28->fields.overwriteName;
        *overwriteName = v30;
        sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)v30, v31, v32);
        v33 = v28->fields.overwriteNameDefault;
        *overwriteNameDefault = v33;
        sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteNameDefault, (int32_t)v33, v34, v35);
        v36 = v28->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1B8880C(v22, v23);
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
    v22 = System_String__Equals_61715348(labelName, v43->fields.id, 0LL);
    if ( v22 )
      break;
    infos = v39->fields.infos;
    ++v41;
    if ( !infos )
      goto LABEL_26;
  }
  v46 = v39->fields.conds;
  *conds = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)conds, (int32_t)v46, v44, v45);
  *isInvalidVoiceList = v39->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v39->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)materialOverwriteName, v47, v48),
        System_String__IsNullOrEmpty(*overwriteName, 0LL)) )
  {
    v50 = v39->fields.overwriteName;
    *overwriteName = v50;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteName, (int32_t)v50, v47, v48);
  }
  v51 = v39->fields.overwriteNameDefault;
  *overwriteNameDefault = v51;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteNameDefault, (int32_t)v51, v47, v48);
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

  return ServantVoiceEntity__getVoiceList_39769868(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_39769868(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0LL), result = 0, !assetName) )
  {
    sub_1B8880C(assetName, method);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_39766344(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_39766344(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4A5B9C0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4464/*"ChrVoice_"*/);
    byte_4A5B9C0 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_4464/*"ChrVoice_"*/, v2, 0LL);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  Il2CppObject *p_obj; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v13; // x8
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B9C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4A5B9C1 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1B8880C(v6, p_obj);
  v11 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( (unsigned int)v11 >= max_length )
      sub_1B88814(v6, p_obj);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              p_obj,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)p_obj;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)p_obj, v8, v9);
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceListByGender(
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
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v23; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v25; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v27; // x9
  ServantVoiceCond_o *v28; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v30; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4A5B9C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9C3 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            saveNameList,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)saveNameList;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)saveNameList, v16, v17);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
      }
    }
LABEL_32:
    sub_1B8880C(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v23 = 0LL;
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
      v27 = *(_QWORD *)&conds->max_length;
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
          if ( !infos->max_length )
LABEL_35:
            sub_1B88814(Instance, saveNameList);
          v30 = infos->m_Items[0];
          if ( !v30 || !MasterData_object )
            goto LABEL_32;
          Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                        (VoicePlayCondMaster_o *)MasterData_object,
                                        this->fields.id,
                                        v30->fields.id,
                                        0LL,
                                        -1LL,
                                        genderType,
                                        0LL,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_32;
            saveNameList = &v25->fields.infos->obj;
            v33 = v11->fields._items;
            v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v11->fields._version;
            if ( !v33 )
              goto LABEL_32;
            v35 = v11->fields._size;
            if ( (unsigned int)v35 >= v33->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                saveNameList,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &v33->obj.klass + v35;
              v11->fields._size = v35 + 1;
              v36[4] = (Il2CppClass *)saveNameList;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)saveNameList, v31, v32);
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_39769868(
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
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v25; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v27; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v29; // x28
  int v30; // w8
  ServantVoiceCond_o *v31; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v33; // x8
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4A5B9C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9C6 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            saveNameList,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v23[4] = (Il2CppClass *)saveNameList;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)saveNameList, v18, v19);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
      }
    }
LABEL_40:
    sub_1B8880C(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v25 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v25 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    if ( v25 >= max_length )
LABEL_43:
      sub_1B88814(Instance, saveNameList);
    v27 = scriptJson->m_Items[v25];
    if ( v27 )
    {
      conds = v27->fields.conds;
      if ( conds )
      {
        v29 = 0LL;
        while ( 1 )
        {
          v30 = conds->max_length;
          if ( (int)v29 >= v30 )
            break;
          if ( (unsigned int)v29 >= v30 )
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
              if ( !infos->max_length )
                goto LABEL_43;
              v33 = infos->m_Items[0];
              if ( !v33 || !MasterData_object )
                goto LABEL_40;
              Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                            (VoicePlayCondMaster_o *)MasterData_object,
                                            this->fields.id,
                                            v33->fields.id,
                                            0LL,
                                            -1LL,
                                            genderType,
                                            0LL,
                                            0LL,
                                            0LL);
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
                if ( (unsigned int)v36 >= v34->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    saveNameList,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                }
                else
                {
                  v37 = &v34->obj.klass + v36;
                  v16->fields._size = v36 + 1;
                  v37[4] = (Il2CppClass *)saveNameList;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)saveNameList, v18, v19);
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_39770596(
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v18; // x9
  SvtVoiceInfo_o *v19; // x8
  il2cpp_array_size_t v20; // w26
  _BOOL4 v21; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v23; // x25
  struct ServantVoiceData_array *infos; // x9
  __int64 v25; // x27
  int v26; // w8
  ServantVoiceData_o *v27; // x28
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4A5B9C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16142/*"_B050"*/);
    byte_4A5B9C7 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16142/*"_B050"*/, 0LL);
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
      v25 = 0LL;
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
        Instance = (Il2CppObject *)System_String__Equals_61715348(labelName, v27->fields.id, 0LL);
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
                                       -1LL,
                                       -1,
                                       0LL,
                                       0LL,
                                       0LL);
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  p_obj,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v31[4] = (Il2CppClass *)p_obj;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)p_obj, v15, v16);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
            }
          }
LABEL_43:
          sub_1B8880C(Instance, p_obj);
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
  v18 = *(_QWORD *)&scriptJson->max_length;
  if ( !v18 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
  if ( !(_DWORD)v18 )
LABEL_44:
    sub_1B88814(Instance, p_obj);
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


bool __fastcall ServantVoiceEntity__isAvailableMyRoomVoice(
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

  if ( (byte_4A5B9D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&VoiceCondType_TypeInfo);
    byte_4A5B9D4 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v12 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v12, 0LL),
        !Entity)
    || (v14 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v16),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_22:
    sub_1B8880C(Instance, v11);
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
      sub_1B88814(Instance, v11);
    v22 = conds->m_Items[v20];
    if ( !v22 )
      goto LABEL_22;
    if ( v22->fields.condType == 23 )
    {
      value = v22->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Instance = (UserServantEntity_array *)VoiceCondType__IsSatisfyCostumeCondition(value, imageLimitCount, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    else
    {
      v24 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL);
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


bool __fastcall ServantVoiceEntity__isAvailableVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4A5B9D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_39777180(this, info, (UserServantEntity_o *)Entity, v10);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_39777180(
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

  if ( (byte_4A5B9D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&VoiceCondType_TypeInfo);
    byte_4A5B9D3 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_25;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_26;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (Il2CppObject *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v11);
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
  v14 = (int)Instance;
  v15 = 0;
  while ( 2 )
  {
    if ( v15 >= max_length )
      sub_1B88814(Instance, v8);
    v16 = conds->m_Items[v15];
    if ( !v16 )
LABEL_26:
      sub_1B8880C(Instance, v8);
    condType = v16->fields.condType;
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
        value = v16->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v21 = -1;
        v22 = condType;
        v23 = value;
        goto LABEL_18;
      default:
        if ( (unsigned int)(condType - 24) > 2 )
        {
LABEL_13:
          v18 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
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
            goto LABEL_25;
        }
        else
        {
          v24 = v16->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          v22 = condType;
          v23 = v24;
          v21 = LimitCount;
LABEL_18:
          Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(v22, v23, v21, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_25;
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


bool __fastcall ServantVoiceEntity__isEventEndState(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        int64_t time,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B9DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9DB = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (__int64)entity[6].klass <= time;
LABEL_9:
    sub_1B8880C(Instance, v7);
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
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B9DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9DA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_1B8880C(Instance, v5);
  }
  return 0;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice(
        ServantVoiceEntity_o *this,
        int64_t userSvtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4A5B9CF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_39775156(this, (UserServantEntity_o *)Entity, voiceId, v10);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_39775156(
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
  __int64 v14; // x9
  SvtVoiceInfo_o *v15; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v17; // x9
  ServantVoiceData_o *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
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
  __int64 v42; // x9
  ServantVoiceData_o *v43; // x8
  __int128 v44; // q1
  int32_t v45; // w25
  System_String_o *v46; // x26
  const MethodInfo *v47; // x3
  struct ServantVoiceCond_array *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+50h] [xbp-80h]

  if ( (byte_4A5B9D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantVoiceData___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    byte_4A5B9D1 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_78;
  v12 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v14 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v12 >= (int)v14 )
      break;
    if ( (unsigned int)v12 >= (unsigned int)v14 )
      goto LABEL_79;
    v15 = scriptJson->m_Items[v12];
    if ( !v15 )
      goto LABEL_78;
    infos = v15->fields.infos;
    if ( infos )
    {
      v17 = *(_QWORD *)&infos->max_length;
      if ( v17 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v17 )
            goto LABEL_79;
          v18 = infos->m_Items[0];
          if ( !v18 )
            goto LABEL_78;
          Instance = System_String__op_Equality(v18->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v17 )
            goto LABEL_79;
          v25 = infos->m_Items[0];
          if ( !v25 )
            goto LABEL_78;
          v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v28 = v25->fields.id;
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v57.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v56, 0LL);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v28,
                       0LL,
                       Instance,
                       -1,
                       0LL,
                       0LL,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v15->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_39777180(this, v15, userServantEntity, v29);
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
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v15,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v24 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v24[4] = (Il2CppClass *)v15;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v15, v19, v20);
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
    if ( (int)v14 >= 1 )
    {
      v39 = 0;
      while ( v39 < (unsigned int)v14 )
      {
        v40 = scriptJson->m_Items[v39];
        if ( !v40 )
          goto LABEL_78;
        v41 = v40->fields.infos;
        if ( v41 )
        {
          v42 = *(_QWORD *)&v41->max_length;
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
            *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v57.fields.fakeValue = v44;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v55 = v57;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v55, 0LL);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v45,
                         v46,
                         0LL,
                         Instance,
                         -1,
                         0LL,
                         0LL,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v48 = v40->fields.conds;
              if ( v48 )
              {
                if ( *(_QWORD *)&v48->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_39777180(this, v40, userServantEntity, v47);
                  if ( (Instance & 1) != 0 )
                  {
                    v51 = v10->fields._items;
                    v52 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v10->fields._version;
                    if ( !v51 )
                      goto LABEL_78;
                    v53 = v10->fields._size;
                    if ( (unsigned int)v53 >= v51->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v10,
                        (Il2CppObject *)v40,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v54 = &v51->obj.klass + v53;
                      v10->fields._size = v53 + 1;
                      v54[4] = (Il2CppClass *)v40;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v40, v49, v50);
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
        LODWORD(v14) = scriptJson->max_length;
        if ( (int)++v39 >= (int)v14 )
          goto LABEL_76;
      }
LABEL_79:
      sub_1B88814(Instance, v8);
    }
LABEL_76:
    if ( v10->fields._size )
    {
LABEL_37:
      v32 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v32, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
      v33 = v10->fields._size;
      if ( v33 >= 1 )
      {
        if ( !v32 )
          goto LABEL_78;
        for ( i = 0; i != v33; ++i )
          WeightRate_int___setWeight(v32, 1, i, (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
      if ( (Instance & 1) != 0 || v10->fields._size < 1 )
      {
LABEL_50:
        if ( v32 )
        {
          v38 = UnityEngine_Random__Range_69419120(0, v32->fields.totalweight, 0LL);
          Data = WeightRate_int___getData(v32, v38, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v10,
                                Data,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
          Instance = System_String__op_Equality(*(System_String_o **)(v37 + 16), voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v10->fields._size )
            goto LABEL_50;
        }
      }
LABEL_78:
      sub_1B8880C(Instance, v8);
    }
  }
  return (ServantVoiceData_array *)sub_1B88658(ServantVoiceData___TypeInfo, 0LL);
}


System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__randomChangeSvtVoiceCount(
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
  __int64 v14; // x9
  ServantVoiceData_o *v15; // x8
  __int128 v16; // q1
  int32_t id; // w24
  System_String_o *v18; // x25
  const MethodInfo *v19; // x3
  struct ServantVoiceCond_array *conds; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-80h]

  if ( (byte_4A5B9D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9D0 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_28:
    sub_1B8880C(Instance, v6);
  }
  v10 = 0LL;
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
      v14 = *(_QWORD *)&infos->max_length;
      if ( v14 )
      {
        if ( !(_DWORD)v14 )
LABEL_31:
          sub_1B88814(Instance, v6);
        v15 = infos->m_Items[0];
        if ( !v15 )
          goto LABEL_28;
        v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v18 = v15->fields.id;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v29;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v28, 0LL);
        if ( !MasterData_object )
          goto LABEL_28;
        Instance = VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     id,
                     v18,
                     0LL,
                     Instance,
                     -1,
                     0LL,
                     0LL,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v12->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_39777180(this, v12, userServantEntity, v19);
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
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v12,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)v12;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v12, v21, v22);
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