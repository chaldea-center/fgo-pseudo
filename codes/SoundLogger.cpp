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

  if ( (byte_4B36712 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_1572/*":NG"*/, v8);
    byte_4B36712 = 1;
  }
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1572/*":NG"*/;
  sub_1BD33FC(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SoundLogger_Info_o *v6; // x20
  const MethodInfo *v7; // x2
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SoundLogger_Info_o *v14; // x20
  const MethodInfo *v15; // x2
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  SoundLogger_Info_o *v22; // x20
  const MethodInfo *v23; // x2
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BgmManager_c *v30; // x0
  struct SoundLogger_BgmDetailInfo_array *v31; // x0
  struct SoundLogger_BgmDetailInfo_array **p_bgmDetailLogs; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  struct SoundLogger_BgmDetailInfo_array *v41; // x8
  unsigned __int64 v42; // x20
  __int64 v43; // x23
  SoundLogger_BgmDetailInfo_o *v44; // x21
  const MethodInfo *v45; // x2
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  unsigned int *v52; // x24
  __int64 v53; // x0

  if ( (byte_4B36707 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_BgmDetailInfo___TypeInfo, method);
    sub_1BD3458(&SoundLogger_BgmDetailInfo_TypeInfo, v3);
    sub_1BD3458(&BgmManager_TypeInfo, v4);
    sub_1BD3458(&SoundLogger_Info_TypeInfo, v5);
    byte_4B36707 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (SoundLogger_Info_o *)sub_1BD36A4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v6, 2, v7);
  this->fields.bgmLog = v6;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  v14 = (SoundLogger_Info_o *)sub_1BD36A4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v14, 5, v15);
  this->fields.voiceLog = v14;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.voiceLog, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = (SoundLogger_Info_o *)sub_1BD36A4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v22, 16, v23);
  this->fields.seLog = v22;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.seLog, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  v30 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v30 = BgmManager_TypeInfo;
  }
  v31 = (struct SoundLogger_BgmDetailInfo_array *)sub_1BD3500(
                                                    SoundLogger_BgmDetailInfo___TypeInfo,
                                                    (unsigned int)v30->static_fields->BGM_PLAYER_MAX_COUNT);
  this->fields.bgmDetailLogs = v31;
  p_bgmDetailLogs = &this->fields.bgmDetailLogs;
  sub_1BD33FC((PartyOrganizationUtility_o *)p_bgmDetailLogs, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  v41 = *p_bgmDetailLogs;
  if ( !*p_bgmDetailLogs )
LABEL_13:
    sub_1BD36B4(v39, v40);
  v42 = 0LL;
  v43 = 8LL;
  while ( (__int64)v42 < (int)v41->max_length )
  {
    v44 = (SoundLogger_BgmDetailInfo_o *)sub_1BD36A4(SoundLogger_BgmDetailInfo_TypeInfo);
    SoundLogger_BgmDetailInfo___ctor(v44, v42, v45);
    v52 = (unsigned int *)*p_bgmDetailLogs;
    if ( *p_bgmDetailLogs )
    {
      if ( v44 )
      {
        v39 = sub_1BD3594(v44, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
        if ( !v39 )
        {
          v53 = sub_1BD36D8(0LL);
          sub_1BD3580(v53, 0LL);
        }
      }
      if ( v42 >= v52[6] )
        sub_1BD36BC(v39, v40);
      *(_QWORD *)&v52[2 * v42 + 8] = v44;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v52[v43], (int64_t)v44, v46, v47, v48, v49, v50, v51);
      v41 = *p_bgmDetailLogs;
      ++v42;
      v43 += 2LL;
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

  if ( (byte_4B3670C & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, actionName);
    byte_4B3670C = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
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
        sub_1BD36BC(Instance, v9);
      Instance = (SoundLogger_BgmDetailInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + (unsigned int)index);
      if ( Instance )
      {
        SoundLogger_BgmDetailInfo__AddLog(Instance, actionName, opt, v10);
        return;
      }
LABEL_14:
      sub_1BD36B4(Instance, v9);
    }
  }
}


System_String_o *__fastcall SoundLogger__GetLogBgmDetail(int32_t index, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SoundLogger_c *v5; // x0
  SoundLogger_o *Instance; // x0
  __int64 v7; // x1
  struct SoundLogger_BgmDetailInfo_array *bgmDetailLogs; // x8
  int32_t max_length; // w9
  SoundLogger_BgmDetailInfo_o *v10; // x8
  System_String_o *v11; // x0

  if ( (byte_4B36711 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, method);
    sub_1BD3458(&StringLiteral_25677/*"秒(切り捨て)  操作      内容\n"*/, v3);
    sub_1BD3458(&StringLiteral_1/*""*/, v4);
    byte_4B36711 = 1;
  }
  v5 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v5);
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
        sub_1BD36BC(Instance, v7);
      v10 = bgmDetailLogs->m_Items[index];
      if ( v10 )
      {
        Instance = (SoundLogger_o *)v10->fields.log;
        if ( Instance )
        {
          v11 = (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                     Instance,
                                     Instance->klass[1]._1.image);
          return System_String__Concat_62525248((System_String_o *)StringLiteral_25677/*"秒(切り捨て)  操作      内容\n"*/, v11, 0LL);
        }
      }
LABEL_15:
      sub_1BD36B4(Instance, v7);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall SoundLogger__GetLogBgmDetailLast(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  SoundLogger_c *v3; // x0
  System_String_o *result; // x0
  __int64 v5; // x1
  System_String_Fields fields; // x8
  System_String_o *v7; // x19
  unsigned int v8; // w20
  unsigned int v9; // w9
  __int64 v10; // x8

  if ( (byte_4B36710 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_1/*""*/, v2);
    byte_4B36710 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  result = (System_String_o *)SoundLogger__get_Instance((const MethodInfo *)v3);
  if ( !result || (fields = result[1].fields, v7 = result, !*(_QWORD *)&fields) )
LABEL_12:
    sub_1BD36B4(result, v5);
  v8 = 0;
  result = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
    if ( (int)v8 >= (int)v9 )
      return result;
    if ( v8 >= v9 )
      sub_1BD36BC(result, v5);
    v10 = *(_QWORD *)(*(_QWORD *)&fields + 8LL * (int)v8 + 32);
    if ( v10 )
    {
      result = System_String__Concat_62525248(result, *(System_String_o **)(v10 + 32), 0LL);
      fields = v7[1].fields;
      ++v8;
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
  __int64 v11; // x1
  System_String_o *v12; // x22
  Il2CppObject **static_fields; // x8
  SoundLogger_c *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4B36708 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, info);
    sub_1BD3458(&StringLiteral_1/*""*/, v10);
    sub_1BD3458(&StringLiteral_25345/*"{0}/{1} {2}"*/, v11);
    byte_4B36708 = 1;
  }
  v12 = (System_String_o *)StringLiteral_25345/*"{0}/{1} {2}"*/;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1/*""*/;
  }
  else
  {
    v14 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v14 = SoundLogger_TypeInfo;
    }
    static_fields = (Il2CppObject **)v14->static_fields;
  }
  v15 = System_String__Format_62539688(v12, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_1BD36B4(v15, v16);
  SoundLogger_Info__add(info, v15, v17);
}


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

  if ( (byte_4B36709 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, cueName);
    byte_4B36709 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BD36B4(v9, v10);
  SoundLogger__addLog(v9, v9->fields.bgmLog, cueSheet, cueName, isValid, v11);
}


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

  if ( (byte_4B3670B & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, cueName);
    byte_4B3670B = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BD36B4(v9, v10);
  SoundLogger__addLog(v9, v9->fields.seLog, cueSheet, cueName, isValid, v11);
}


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

  if ( (byte_4B3670A & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, cueName);
    byte_4B3670A = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BD36B4(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3670D & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, v1);
    byte_4B3670D = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_1BD36B4(Instance, v4);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3670F & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, v1);
    byte_4B3670F = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_1BD36B4(Instance, v4);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3670E & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, v1);
    byte_4B3670E = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_1BD36B4(Instance, v4);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


SoundLogger_o *__fastcall SoundLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *v3; // x19
  const MethodInfo *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  SoundLogger_c *v11; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_4B36706 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_TypeInfo, v1);
    byte_4B36706 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v2 = SoundLogger_TypeInfo;
  }
  if ( !v2->static_fields->instance )
  {
    v3 = (SoundLogger_o *)sub_1BD36A4(v2);
    SoundLogger___ctor(v3, v4);
    v11 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v11 = SoundLogger_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->instance = v3;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->instance, (int64_t)v3, v5, v6, v7, v8, v9, v10);
    v2 = SoundLogger_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = SoundLogger_TypeInfo;
  }
  return v2->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_1BD36B4(this, 0LL);
  return SoundLogger_Info__checkPlayLogLatest(info, (const MethodInfo *)info);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger_BgmDetailInfo___ctor(
        SoundLogger_BgmDetailInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SoundLogger_Info_o *v7; // x21
  const MethodInfo *v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  struct System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B36716 & 1) == 0 )
  {
    sub_1BD3458(&SoundLogger_Info_TypeInfo, *(_QWORD *)&index);
    sub_1BD3458(&int_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_25351/*"{0}:\n"*/, v6);
    byte_4B36716 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = index;
  v7 = (SoundLogger_Info_o *)sub_1BD36A4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v7, 40, v8);
  this->fields.log = v7;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.log, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  v26 = index;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v15, v16, v17);
  v19 = System_String__Format((System_String_o *)StringLiteral_25351/*"{0}:\n"*/, v18, 0LL);
  this->fields.last = v19;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.last, (int64_t)v19, v20, v21, v22, v23, v24, v25);
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
  __int64 v8; // x1
  System_String_o *TimeString; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  System_String_o *v12; // x0
  SoundLogger_Info_o *log; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t index; // [xsp+Ch] [xbp-34h] BYREF

  v5 = actionName;
  v6 = this;
  if ( (byte_4B36717 & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, actionName);
    sub_1BD3458(&StringLiteral_25357/*"{0}: {1}\n"*/, v7);
    this = (SoundLogger_BgmDetailInfo_o *)sub_1BD3458(&StringLiteral_25307/*"{0} {1}"*/, v8);
    byte_4B36717 = 1;
  }
  TimeString = SoundLogger_BgmDetailInfo__GetTimeString(this, (const MethodInfo *)actionName);
  v11 = (Il2CppObject *)TimeString;
  if ( opt )
  {
    if ( !v5 )
      goto LABEL_8;
    v12 = System_String__PadRight(v5, 10, 0LL);
    v5 = System_String__Concat_62525248(v12, opt, 0LL);
  }
  log = v6->fields.log;
  TimeString = System_String__Format_62539620((System_String_o *)StringLiteral_25307/*"{0} {1}"*/, v11, (Il2CppObject *)v5, 0LL);
  if ( !log )
LABEL_8:
    sub_1BD36B4(TimeString, v10);
  SoundLogger_Info__add(log, TimeString, v14);
  index = v6->fields.index;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index, v15, v16, v17);
  v19 = System_String__Format_62539620((System_String_o *)StringLiteral_25357/*"{0}: {1}\n"*/, v18, (Il2CppObject *)v5, 0LL);
  v6->fields.last = v19;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v6->fields.last, (int64_t)v19, v20, v21, v22, v23, v24, v25);
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__GetTimeString(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  Il2CppObject *v6; // x0
  System_String_o *result; // x0
  __int64 v8; // x1
  int32_t stringLength; // w8
  float unscaledTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B36718 & 1) == 0 )
  {
    sub_1BD3458(&float_TypeInfo, method);
    sub_1BD3458(&StringLiteral_25229/*"{0:00.000}"*/, v2);
    byte_4B36718 = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &unscaledTime, v3, v4, v5);
  result = System_String__Format((System_String_o *)StringLiteral_25229/*"{0:00.000}"*/, v6, 0LL);
  if ( !result )
    sub_1BD36B4(0LL, v8);
  stringLength = result->fields._stringLength;
  if ( stringLength >= 7 )
    return System_String__Substring_62544252(result, stringLength - 6, 6, 0LL);
  return result;
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__ToStringAll(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  struct SoundLogger_Info_o *log; // x0

  log = this->fields.log;
  if ( !log )
    sub_1BD36B4(0LL, method);
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
  __int64 v6; // x1
  struct System_String_array *v7; // x0
  SoundLogger_Info_Fields *p_fields; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  unsigned __int64 v23; // x22
  __int64 v24; // x24
  struct System_String_array *buff; // x8
  int64_t v26; // x1
  System_Text_StringBuilder_o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B36713 & 1) == 0 )
  {
    sub_1BD3458(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&maxBuff);
    sub_1BD3458(&string___TypeInfo, v5);
    sub_1BD3458(&StringLiteral_932/*"--------"*/, v6);
    byte_4B36713 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v7 = (struct System_String_array *)sub_1BD3500(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v7;
  p_fields = &this->fields;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  if ( maxBuff >= 1 )
  {
    v23 = 0LL;
    v24 = 32LL;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_1BD36B4(v15, v16);
      if ( v23 >= buff->max_length )
        sub_1BD36BC(v15, v16);
      v26 = StringLiteral_932/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v24) = (Il2CppClass *)StringLiteral_932/*"--------"*/;
      sub_1BD33FC((PartyOrganizationUtility_o *)((char *)buff + v24), v26, v17, v18, v19, v20, v21, v22);
      ++v23;
      v24 += 8LL;
    }
    while ( maxBuff != v23 );
  }
  this->fields.currentIndex = -1;
  v27 = (System_Text_StringBuilder_o *)sub_1BD36A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v27, 0LL);
  this->fields.sb = v27;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.sb, (int64_t)v27, v28, v29, v30, v31, v32, v33);
}


System_String_o *__fastcall SoundLogger_Info__ToString(SoundLogger_Info_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w24
  int32_t v9; // w23
  System_String_o **v10; // x8
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v12; // w9

  if ( (byte_4B36714 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_43/*"\n"*/, method);
    sub_1BD3458(&StringLiteral_116/*" "*/, v3);
    sub_1BD3458(&StringLiteral_932/*"--------"*/, v4);
    sub_1BD3458(&StringLiteral_1866/*">"*/, v5);
    byte_4B36714 = 1;
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
    v9 = this->fields.currentIndex;
    while ( 1 )
    {
      sb = this->fields.sb;
      if ( !sb )
        break;
      v10 = v9 == currentIndex ? (System_String_o **)&StringLiteral_1866/*">"*/ : (System_String_o **)&StringLiteral_116/*" "*/;
      sb = System_Text_StringBuilder__Append_61687144(sb, *v10, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v12 = (maxNum & (v9 >> 31)) + v9;
      if ( v12 >= buff->max_length )
        sub_1BD36BC(sb, method);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_61687144(sb, buff->m_Items[v12], 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_61687144(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v9 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_1BD36B4(sb, method);
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
    sub_1BD36B4(this, name);
  if ( v9 >= buff->max_length )
    sub_1BD36BC(this, name);
  v10 = &buff->obj.klass + v9;
  v10[4] = (Il2CppClass *)name;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19

  v2 = this;
  if ( (byte_4B36715 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_1BD3458(&SoundLogger_TypeInfo, method);
    byte_4B36715 = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= buff->max_length )
    sub_1BD36BC(this, method);
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_11:
    sub_1BD36B4(this, method);
  return System_String__LastIndexOf_62558588(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}