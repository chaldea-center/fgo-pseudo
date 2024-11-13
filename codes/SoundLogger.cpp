void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B15776 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1572/*":NG"*/, v8, v9);
    byte_4B15776 = 1;
  }
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1572/*":NG"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SoundLogger_TypeInfo->static_fields,
    StringLiteral_1572/*":NG"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  SoundLogger_Info_o *v13; // x20
  const MethodInfo *v14; // x2
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  SoundLogger_Info_o *v24; // x20
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  SoundLogger_Info_o *v35; // x20
  const MethodInfo *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  BgmManager_c *v44; // x0
  struct SoundLogger_BgmDetailInfo_array *v45; // x0
  struct SoundLogger_BgmDetailInfo_array **p_bgmDetailLogs; // x19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  struct SoundLogger_BgmDetailInfo_array *v57; // x8
  unsigned __int64 v58; // x20
  __int64 v59; // x23
  SoundLogger_BgmDetailInfo_o *v60; // x21
  const MethodInfo *v61; // x2
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  unsigned int *v68; // x24
  __int64 v69; // x0

  if ( (byte_4B1576B & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_BgmDetailInfo___TypeInfo, method, v2);
    sub_1BCA7E0(&SoundLogger_BgmDetailInfo_TypeInfo, v4, v5);
    sub_1BCA7E0(&BgmManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&SoundLogger_Info_TypeInfo, v8, v9);
    byte_4B1576B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13 = (SoundLogger_Info_o *)sub_1BCAA2C(SoundLogger_Info_TypeInfo, v10, v11, v12);
  SoundLogger_Info___ctor(v13, 2, v14);
  this->fields.bgmLog = v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  v24 = (SoundLogger_Info_o *)sub_1BCAA2C(SoundLogger_Info_TypeInfo, v21, v22, v23);
  SoundLogger_Info___ctor(v24, 5, v25);
  this->fields.voiceLog = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceLog, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  v35 = (SoundLogger_Info_o *)sub_1BCAA2C(SoundLogger_Info_TypeInfo, v32, v33, v34);
  SoundLogger_Info___ctor(v35, 16, v36);
  this->fields.seLog = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seLog, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  v44 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v43);
    v44 = BgmManager_TypeInfo;
  }
  v45 = (struct SoundLogger_BgmDetailInfo_array *)sub_1BCA888(
                                                    SoundLogger_BgmDetailInfo___TypeInfo,
                                                    (unsigned int)v44->static_fields->BGM_PLAYER_MAX_COUNT);
  this->fields.bgmDetailLogs = v45;
  p_bgmDetailLogs = &this->fields.bgmDetailLogs;
  sub_1BCA784((PartyOrganizationUtility_o *)p_bgmDetailLogs, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  v57 = *p_bgmDetailLogs;
  if ( !*p_bgmDetailLogs )
LABEL_13:
    sub_1BCAA3C(v53, v54);
  v58 = 0LL;
  v59 = 8LL;
  while ( (__int64)v58 < (int)v57->max_length )
  {
    v60 = (SoundLogger_BgmDetailInfo_o *)sub_1BCAA2C(SoundLogger_BgmDetailInfo_TypeInfo, v54, v55, v56);
    SoundLogger_BgmDetailInfo___ctor(v60, v58, v61);
    v68 = (unsigned int *)*p_bgmDetailLogs;
    if ( *p_bgmDetailLogs )
    {
      if ( v60 )
      {
        v53 = sub_1BCA91C(v60, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
        if ( !v53 )
        {
          v69 = sub_1BCAA60(0LL);
          sub_1BCA908(v69, 0LL);
        }
      }
      if ( v58 >= v68[6] )
        sub_1BCAA44(v53, v54);
      *(_QWORD *)&v68[2 * v58 + 8] = v60;
      sub_1BCA784((PartyOrganizationUtility_o *)&v68[v59], (int64_t)v60, v62, v63, v64, v65, v66, v67);
      v57 = *p_bgmDetailLogs;
      ++v58;
      v59 += 2LL;
      if ( *p_bgmDetailLogs )
        continue;
    }
    goto LABEL_13;
  }
}


void __fastcall SoundLogger__AddLogBgmDetail(
        int32_t index,
        System_String_o *actionName,
        System_String_o *opt,
        const MethodInfo *method)
{
  SoundLogger_c *v7; // x0
  SoundLogger_BgmDetailInfo_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  SoundLogger_BgmDetailInfo_c *klass; // x8
  int32_t namespaze; // w9

  if ( (byte_4B15770 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, actionName, opt);
    byte_4B15770 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, actionName);
  Instance = (SoundLogger_BgmDetailInfo_o *)SoundLogger__get_Instance((const MethodInfo *)v7);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !Instance )
      goto LABEL_14;
    klass = Instance[1].klass;
    if ( !klass )
      goto LABEL_14;
    namespaze = (int32_t)klass->_1.namespaze;
    if ( namespaze > index )
    {
      if ( namespaze <= (unsigned int)index )
        sub_1BCAA44(Instance, v9);
      Instance = (SoundLogger_BgmDetailInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + (unsigned int)index);
      if ( Instance )
      {
        SoundLogger_BgmDetailInfo__AddLog(Instance, actionName, opt, v10);
        return;
      }
LABEL_14:
      sub_1BCAA3C(Instance, v9);
    }
  }
}


System_String_o *__fastcall SoundLogger__GetLogBgmDetail(int32_t index, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  SoundLogger_c *v8; // x0
  SoundLogger_o *Instance; // x0
  __int64 v10; // x1
  struct SoundLogger_BgmDetailInfo_array *bgmDetailLogs; // x8
  int32_t max_length; // w9
  SoundLogger_BgmDetailInfo_o *v13; // x8
  System_String_o *v14; // x0

  if ( (byte_4B15775 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25639/*"秒(切り捨て)  操作      内容\n"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B15775 = 1;
  }
  v8 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, method);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v8);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !Instance )
      goto LABEL_15;
    bgmDetailLogs = Instance->fields.bgmDetailLogs;
    if ( !bgmDetailLogs )
      goto LABEL_15;
    max_length = bgmDetailLogs->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1BCAA44(Instance, v10);
      v13 = bgmDetailLogs->m_Items[index];
      if ( v13 )
      {
        Instance = (SoundLogger_o *)v13->fields.log;
        if ( Instance )
        {
          v14 = (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                     Instance,
                                     Instance->klass[1]._1.image);
          return System_String__Concat_62401220((System_String_o *)StringLiteral_25639/*"秒(切り捨て)  操作      内容\n"*/, v14, 0LL);
        }
      }
LABEL_15:
      sub_1BCAA3C(Instance, v10);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall SoundLogger__GetLogBgmDetailLast(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  SoundLogger_c *v5; // x0
  System_String_o *result; // x0
  __int64 v7; // x1
  System_String_Fields fields; // x8
  System_String_o *v9; // x19
  unsigned int v10; // w20
  unsigned int v11; // w9
  __int64 v12; // x8

  if ( (byte_4B15774 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v3, v4);
    byte_4B15774 = 1;
  }
  v5 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  result = (System_String_o *)SoundLogger__get_Instance((const MethodInfo *)v5);
  if ( !result || (fields = result[1].fields, v9 = result, !*(_QWORD *)&fields) )
LABEL_12:
    sub_1BCAA3C(result, v7);
  v10 = 0;
  result = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
    if ( (int)v10 >= (int)v11 )
      return result;
    if ( v10 >= v11 )
      sub_1BCAA44(result, v7);
    v12 = *(_QWORD *)(*(_QWORD *)&fields + 8LL * (int)v10 + 32);
    if ( v12 )
    {
      result = System_String__Concat_62401220(result, *(System_String_o **)(v12 + 32), 0LL);
      fields = v9[1].fields;
      ++v10;
      if ( fields )
        continue;
    }
    goto LABEL_12;
  }
}


void __fastcall SoundLogger__addLog(
        SoundLogger_o *this,
        SoundLogger_Info_o *info,
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool isValid,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x22
  Il2CppObject **static_fields; // x8
  SoundLogger_c *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4B1576C & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, info, cueSheet);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_25310/*"{0}/{1} {2}"*/, v12, v13);
    byte_4B1576C = 1;
  }
  v14 = (System_String_o *)StringLiteral_25310/*"{0}/{1} {2}"*/;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1/*""*/;
  }
  else
  {
    v16 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, info);
      v16 = SoundLogger_TypeInfo;
    }
    static_fields = (Il2CppObject **)v16->static_fields;
  }
  v17 = System_String__Format_62415660(v14, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_1BCAA3C(v17, v18);
  SoundLogger_Info__add(info, v17, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger__addLogBgm(
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool isValid,
        const MethodInfo *method)
{
  SoundLogger_c *v7; // x0
  SoundLogger_o *Instance; // x22
  SoundLogger_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B1576D & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, cueName, isValid);
    byte_4B1576D = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, cueName);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BCAA3C(v9, v10);
  SoundLogger__addLog(v9, v9->fields.bgmLog, cueSheet, cueName, isValid, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger__addLogSe(
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool isValid,
        const MethodInfo *method)
{
  SoundLogger_c *v7; // x0
  SoundLogger_o *Instance; // x22
  SoundLogger_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B1576F & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, cueName, isValid);
    byte_4B1576F = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, cueName);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BCAA3C(v9, v10);
  SoundLogger__addLog(v9, v9->fields.seLog, cueSheet, cueName, isValid, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger__addLogVoice(
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool isValid,
        const MethodInfo *method)
{
  SoundLogger_c *v7; // x0
  SoundLogger_o *Instance; // x22
  SoundLogger_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B1576E & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, cueName, isValid);
    byte_4B1576E = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, cueName);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BCAA3C(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SoundLogger_c *v3; // x0
  SoundLogger_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B15771 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, v1, v2);
    byte_4B15771 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v3);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_1BCAA3C(Instance, v5);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SoundLogger_c *v3; // x0
  SoundLogger_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B15773 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, v1, v2);
    byte_4B15773 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v3);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_1BCAA3C(Instance, v5);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SoundLogger_c *v3; // x0
  SoundLogger_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B15772 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, v1, v2);
    byte_4B15772 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v3);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_1BCAA3C(Instance, v5);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


SoundLogger_o *__fastcall SoundLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  SoundLogger_c *v4; // x0
  SoundLogger_o *v5; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SoundLogger_c *v14; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_4B1576A & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_TypeInfo, v1, v2);
    byte_4B1576A = 1;
  }
  v4 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
    v4 = SoundLogger_TypeInfo;
  }
  if ( !v4->static_fields->instance )
  {
    v5 = (SoundLogger_o *)sub_1BCAA2C(v4, v1, v2, v3);
    SoundLogger___ctor(v5, v6);
    v14 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v7);
      v14 = SoundLogger_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->instance = v5;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->instance, (int64_t)v5, v8, v9, v10, v11, v12, v13);
    v4 = SoundLogger_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = SoundLogger_TypeInfo;
  }
  return v4->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
  return SoundLogger_Info__checkPlayLogLatest(info, (const MethodInfo *)info);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger_BgmDetailInfo___ctor(
        SoundLogger_BgmDetailInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  SoundLogger_Info_o *v12; // x21
  const MethodInfo *v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x0
  struct System_String_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1577A & 1) == 0 )
  {
    sub_1BCA7E0(&SoundLogger_Info_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_25316/*"{0}:\n"*/, v7, v8);
    byte_4B1577A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = index;
  v12 = (SoundLogger_Info_o *)sub_1BCAA2C(SoundLogger_Info_TypeInfo, v9, v10, v11);
  SoundLogger_Info___ctor(v12, 40, v13);
  this->fields.log = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.log, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  v28 = index;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v21 = System_String__Format((System_String_o *)StringLiteral_25316/*"{0}:\n"*/, v20, 0LL);
  this->fields.last = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.last, (int64_t)v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall SoundLogger_BgmDetailInfo__AddLog(
        SoundLogger_BgmDetailInfo_o *this,
        System_String_o *actionName,
        System_String_o *opt,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  SoundLogger_BgmDetailInfo_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *TimeString; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x22
  System_String_o *v14; // x0
  SoundLogger_Info_o *log; // x21
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t index; // [xsp+Ch] [xbp-34h] BYREF

  v5 = actionName;
  v6 = this;
  if ( (byte_4B1577B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, actionName, opt);
    sub_1BCA7E0(&StringLiteral_25322/*"{0}: {1}\n"*/, v7, v8);
    this = (SoundLogger_BgmDetailInfo_o *)sub_1BCA7E0(&StringLiteral_25272/*"{0} {1}"*/, v9, v10);
    byte_4B1577B = 1;
  }
  TimeString = SoundLogger_BgmDetailInfo__GetTimeString(this, (const MethodInfo *)actionName);
  v13 = (Il2CppObject *)TimeString;
  if ( opt )
  {
    if ( !v5 )
      goto LABEL_8;
    v14 = System_String__PadRight(v5, 10, 0LL);
    v5 = System_String__Concat_62401220(v14, opt, 0LL);
  }
  log = v6->fields.log;
  TimeString = System_String__Format_62415592((System_String_o *)StringLiteral_25272/*"{0} {1}"*/, v13, (Il2CppObject *)v5, 0LL);
  if ( !log )
LABEL_8:
    sub_1BCAA3C(TimeString, v12);
  SoundLogger_Info__add(log, TimeString, v16);
  index = v6->fields.index;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index);
  v18 = System_String__Format_62415592((System_String_o *)StringLiteral_25322/*"{0}: {1}\n"*/, v17, (Il2CppObject *)v5, 0LL);
  v6->fields.last = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.last, (int64_t)v18, v19, v20, v21, v22, v23, v24);
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__GetTimeString(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *v5; // x0
  System_String_o *result; // x0
  __int64 v7; // x1
  int32_t stringLength; // w8
  float unscaledTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1577C & 1) == 0 )
  {
    sub_1BCA7E0(&float_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25194/*"{0:00.000}"*/, v3, v4);
    byte_4B1577C = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &unscaledTime);
  result = System_String__Format((System_String_o *)StringLiteral_25194/*"{0:00.000}"*/, v5, 0LL);
  if ( !result )
    sub_1BCAA3C(0LL, v7);
  stringLength = result->fields._stringLength;
  if ( stringLength >= 7 )
    return System_String__Substring_62420224(result, stringLength - 6, 6, 0LL);
  return result;
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__ToStringAll(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  struct SoundLogger_Info_o *log; // x0

  log = this->fields.log;
  if ( !log )
    sub_1BCAA3C(0LL, method);
  return (System_String_o *)((__int64 (__fastcall *)(struct SoundLogger_Info_o *, void *))log->klass->vtable._3_ToString.method)(
                              log,
                              log->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__ToStringLast(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.last;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_array *v9; // x0
  SoundLogger_Info_Fields *p_fields; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  __int64 v20; // x3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  unsigned __int64 v25; // x22
  __int64 v26; // x24
  struct System_String_array *buff; // x8
  int64_t v28; // x1
  System_Text_StringBuilder_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B15777 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&maxBuff, method);
    sub_1BCA7E0(&string___TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_932/*"--------"*/, v7, v8);
    byte_4B15777 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v9 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v9;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  if ( maxBuff >= 1 )
  {
    v25 = 0LL;
    v26 = 32LL;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_1BCAA3C(v17, v18);
      if ( v25 >= buff->max_length )
        sub_1BCAA44(v17, v18);
      v28 = StringLiteral_932/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v26) = (Il2CppClass *)StringLiteral_932/*"--------"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)buff + v26), v28, v19, v20, v21, v22, v23, v24);
      ++v25;
      v26 += 8LL;
    }
    while ( maxBuff != v25 );
  }
  this->fields.currentIndex = -1;
  v29 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v18, v19, v20);
  System_Text_StringBuilder___ctor(v29, 0LL);
  this->fields.sb = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sb, (int64_t)v29, v30, v31, v32, v33, v34, v35);
}


System_String_o *__fastcall SoundLogger_Info__ToString(SoundLogger_Info_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w24
  int32_t v13; // w23
  System_String_o **v14; // x8
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v16; // w9

  if ( (byte_4B15778 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_932/*"--------"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1858/*">"*/, v8, v9);
    byte_4B15778 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_932/*"--------"*/;
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_19;
  System_Text_StringBuilder__set_Length(sb, 0, 0LL);
  currentIndex = this->fields.currentIndex;
  maxNum = this->fields.maxNum;
  if ( currentIndex > currentIndex - maxNum )
  {
    v13 = this->fields.currentIndex;
    while ( 1 )
    {
      sb = this->fields.sb;
      if ( !sb )
        break;
      v14 = v13 == currentIndex ? (System_String_o **)&StringLiteral_1858/*">"*/ : (System_String_o **)&StringLiteral_116/*" "*/;
      sb = System_Text_StringBuilder__Append_61563116(sb, *v14, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v16 = (maxNum & (v13 >> 31)) + v13;
      if ( v16 >= buff->max_length )
        sub_1BCAA44(sb, method);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_61563116(sb, buff->m_Items[v16], 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_61563116(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v13 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_1BCAA3C(sb, method);
  }
LABEL_16:
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_19;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))sb->klass->vtable._3_ToString.method)(
                              sb,
                              sb->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall SoundLogger_Info__add(SoundLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_array *buff; // x8
  int v9; // w9
  Il2CppClass **v10; // x0

  buff = this->fields.buff;
  v9 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v9;
  if ( !buff )
    sub_1BCAA3C(this, name);
  if ( v9 >= buff->max_length )
    sub_1BCAA44(this, name);
  v10 = &buff->obj.klass + v9;
  v10[4] = (Il2CppClass *)name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SoundLogger_Info_o *v3; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v6; // x19

  v3 = this;
  if ( (byte_4B15779 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_1BCA7E0(&SoundLogger_TypeInfo, method, v2);
    byte_4B15779 = 1;
  }
  currentIndex = v3->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v3->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= buff->max_length )
    sub_1BCAA44(this, method);
  v6 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, method);
  if ( !v6 )
LABEL_11:
    sub_1BCAA3C(this, method);
  return System_String__LastIndexOf_62434560(v6, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}