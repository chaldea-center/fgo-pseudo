void SoundLogger___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CEDC38 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1482/*":NG"*/);
    byte_4CEDC38 = 1;
  }
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1482/*":NG"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SoundLogger_TypeInfo->static_fields,
    StringLiteral_1482/*":NG"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  SoundLogger_Info_o *v11; // x20
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  SoundLogger_Info_o *v19; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  BgmManager_c *v27; // x0
  struct SoundLogger_BgmDetailInfo_array *v28; // x0
  struct SoundLogger_BgmDetailInfo_array **p_bgmDetailLogs; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  __int64 v36; // x0
  __int64 v37; // x1
  struct SoundLogger_BgmDetailInfo_array *v38; // x8
  unsigned __int64 v39; // x20
  __int64 v40; // x23
  SoundLogger_BgmDetailInfo_o *v41; // x21
  const MethodInfo *v42; // x2
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  unsigned int *v49; // x24
  __int64 v50; // x0

  if ( (byte_4CEDC2D & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_BgmDetailInfo___TypeInfo);
    sub_1C7BAE8(&SoundLogger_BgmDetailInfo_TypeInfo);
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&SoundLogger_Info_TypeInfo);
    byte_4CEDC2D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (SoundLogger_Info_o *)sub_1C7BD34(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v3, 2, v4);
  this->fields.bgmLog = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (SoundLogger_Info_o *)sub_1C7BD34(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v11, 5, v12);
  this->fields.voiceLog = v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.voiceLog, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  v19 = (SoundLogger_Info_o *)sub_1C7BD34(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v19, 16, v20);
  this->fields.seLog = v19;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.seLog, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  v27 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v27 = BgmManager_TypeInfo;
  }
  v28 = (struct SoundLogger_BgmDetailInfo_array *)sub_1C7BB90(
                                                    SoundLogger_BgmDetailInfo___TypeInfo,
                                                    (unsigned int)v27->static_fields->BGM_PLAYER_MAX_COUNT);
  this->fields.bgmDetailLogs = v28;
  p_bgmDetailLogs = &this->fields.bgmDetailLogs;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_bgmDetailLogs, (int32_t)v28, v30, v31, v32, v33, v34, v35);
  v38 = *p_bgmDetailLogs;
  if ( !*p_bgmDetailLogs )
LABEL_13:
    sub_1C7BD40(v36, v37);
  v39 = 0;
  v40 = 8;
  while ( (__int64)v39 < SLODWORD(v38->max_length) )
  {
    v41 = (SoundLogger_BgmDetailInfo_o *)sub_1C7BD34(SoundLogger_BgmDetailInfo_TypeInfo);
    SoundLogger_BgmDetailInfo___ctor(v41, v39, v42);
    v49 = (unsigned int *)*p_bgmDetailLogs;
    if ( *p_bgmDetailLogs )
    {
      if ( v41 )
      {
        v36 = sub_1C7BC24(v41, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
        if ( !v36 )
        {
          v50 = sub_1C7BD64(0);
          sub_1C7BC10(v50, 0);
        }
      }
      if ( v39 >= v49[6] )
        sub_1C7BD48(v36);
      *(_QWORD *)&v49[2 * v39 + 8] = v41;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v49[v40], (int32_t)v41, v43, v44, v45, v46, v47, v48);
      v38 = *p_bgmDetailLogs;
      ++v39;
      v40 += 2;
      if ( *p_bgmDetailLogs )
        continue;
    }
    goto LABEL_13;
  }
}


void SoundLogger__AddLogBgmDetail(
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

  if ( (byte_4CEDC32 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC32 = 1;
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
        sub_1C7BD48(Instance);
      Instance = (SoundLogger_BgmDetailInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + (unsigned int)index);
      if ( Instance )
      {
        SoundLogger_BgmDetailInfo__AddLog(Instance, actionName, opt, v10);
        return;
      }
LABEL_14:
      sub_1C7BD40(Instance, v9);
    }
  }
}


System_String_o *SoundLogger__GetLogBgmDetail(int32_t index, const MethodInfo *method)
{
  SoundLogger_c *v3; // x0
  SoundLogger_o *Instance; // x0
  __int64 v5; // x1
  struct SoundLogger_BgmDetailInfo_array *bgmDetailLogs; // x8
  int32_t max_length; // w9
  SoundLogger_BgmDetailInfo_o *v8; // x8
  System_String_o *v9; // x0

  if ( (byte_4CEDC37 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25757/*"秒(切り捨て)  操作      内容\n"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDC37 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v3);
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
        sub_1C7BD48(Instance);
      v8 = bgmDetailLogs->m_Items[index];
      if ( v8 )
      {
        Instance = (SoundLogger_o *)v8->fields.log;
        if ( Instance )
        {
          v9 = (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                                    Instance,
                                    Instance->klass->vtable._3_ToString.method);
          return System_String__Concat_64176912((System_String_o *)StringLiteral_25757/*"秒(切り捨て)  操作      内容\n"*/, v9, 0);
        }
      }
LABEL_15:
      sub_1C7BD40(Instance, v5);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *SoundLogger__GetLogBgmDetailLast(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  System_String_o *result; // x0
  __int64 v3; // x1
  System_String_Fields fields; // x8
  System_String_o *v5; // x19
  unsigned int v6; // w20
  unsigned int v7; // w9
  __int64 v8; // x8

  if ( (byte_4CEDC36 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDC36 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  result = (System_String_o *)SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !result || (fields = result[1].fields, v5 = result, !*(_QWORD *)&fields) )
LABEL_12:
    sub_1C7BD40(result, v3);
  v6 = 0;
  result = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
    if ( (int)v6 >= (int)v7 )
      return result;
    if ( v6 >= v7 )
      sub_1C7BD48(result);
    v8 = *(_QWORD *)(*(_QWORD *)&fields + 8LL * (int)v6 + 32);
    if ( v8 )
    {
      result = System_String__Concat_64176912(result, *(System_String_o **)(v8 + 32), 0);
      fields = v5[1].fields;
      ++v6;
      if ( fields )
        continue;
    }
    goto LABEL_12;
  }
}


void SoundLogger__addLog(
        SoundLogger_o *this,
        SoundLogger_Info_o *info,
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool isValid,
        const MethodInfo *method)
{
  System_String_o *v10; // x22
  Il2CppObject **static_fields; // x8
  SoundLogger_c *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4CEDC2E & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_25413/*"{0}/{1} {2}"*/);
    byte_4CEDC2E = 1;
  }
  v10 = (System_String_o *)StringLiteral_25413/*"{0}/{1} {2}"*/;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1/*""*/;
  }
  else
  {
    v12 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v12 = SoundLogger_TypeInfo;
    }
    static_fields = (Il2CppObject **)v12->static_fields;
  }
  v13 = System_String__Format_64218288(v10, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0);
  if ( !info )
    sub_1C7BD40(v13, v14);
  SoundLogger_Info__add(info, v13, v15);
}


void SoundLogger__addLogBgm(
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

  if ( (byte_4CEDC2F & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC2F = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1C7BD40(v9, v10);
  SoundLogger__addLog(v9, v9->fields.bgmLog, cueSheet, cueName, isValid, v11);
}


void SoundLogger__addLogSe(System_String_o *cueSheet, System_String_o *cueName, bool isValid, const MethodInfo *method)
{
  SoundLogger_c *v7; // x0
  SoundLogger_o *Instance; // x22
  SoundLogger_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4CEDC31 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC31 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1C7BD40(v9, v10);
  SoundLogger__addLog(v9, v9->fields.seLog, cueSheet, cueName, isValid, v11);
}


void SoundLogger__addLogVoice(
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

  if ( (byte_4CEDC30 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC30 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1C7BD40(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *SoundLogger__getLogBgm(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEDC33 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC33 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0 )
    sub_1C7BD40(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                              Instance,
                              Instance->klass->vtable._3_ToString.method);
}


System_String_o *SoundLogger__getLogSe(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEDC35 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC35 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0 )
    sub_1C7BD40(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                              Instance,
                              Instance->klass->vtable._3_ToString.method);
}


System_String_o *SoundLogger__getLogVoice(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEDC34 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC34 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0 )
    sub_1C7BD40(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                              Instance,
                              Instance->klass->vtable._3_ToString.method);
}


SoundLogger_o *SoundLogger__get_Instance(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *v2; // x19
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  SoundLogger_c *v10; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_4CEDC2C & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC2C = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v1 = SoundLogger_TypeInfo;
  }
  if ( !v1->static_fields->instance )
  {
    v2 = (SoundLogger_o *)sub_1C7BD34(v1);
    SoundLogger___ctor(v2, v3);
    v10 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v10 = SoundLogger_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->instance = v2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->instance, (int32_t)v2, v4, v5, v6, v7, v8, v9);
    v1 = SoundLogger_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = SoundLogger_TypeInfo;
  }
  return v1->static_fields->instance;
}


bool SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_1C7BD40(this, 0);
  return SoundLogger_Info__checkPlayLogLatest(info, (const MethodInfo *)info);
}


void SoundLogger_BgmDetailInfo___ctor(SoundLogger_BgmDetailInfo_o *this, int32_t index, const MethodInfo *method)
{
  SoundLogger_Info_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *v13; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEDC3C & 1) == 0 )
  {
    sub_1C7BAE8(&SoundLogger_Info_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25419/*"{0}:\n"*/);
    byte_4CEDC3C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.index = index;
  v5 = (SoundLogger_Info_o *)sub_1C7BD34(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v5, 40, v6);
  this->fields.log = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.log, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v21 = index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v14 = System_String__Format((System_String_o *)StringLiteral_25419/*"{0}:\n"*/, v13, 0);
  this->fields.last = v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.last, (int32_t)v14, v15, v16, v17, v18, v19, v20);
}


void SoundLogger_BgmDetailInfo__AddLog(
        SoundLogger_BgmDetailInfo_o *this,
        System_String_o *actionName,
        System_String_o *opt,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  SoundLogger_BgmDetailInfo_o *v6; // x19
  System_String_o *TimeString; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  System_String_o *v10; // x0
  SoundLogger_Info_o *log; // x21
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t index; // [xsp+Ch] [xbp-34h] BYREF

  v5 = actionName;
  v6 = this;
  if ( (byte_4CEDC3D & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25425/*"{0}: {1}\n"*/);
    this = (SoundLogger_BgmDetailInfo_o *)sub_1C7BAE8(&StringLiteral_25389/*"{0} {1}"*/);
    byte_4CEDC3D = 1;
  }
  TimeString = SoundLogger_BgmDetailInfo__GetTimeString(this, (const MethodInfo *)actionName);
  v9 = (Il2CppObject *)TimeString;
  if ( opt )
  {
    if ( !v5 )
      goto LABEL_8;
    v10 = System_String__PadRight(v5, 10, 0);
    v5 = System_String__Concat_64176912(v10, opt, 0);
  }
  log = v6->fields.log;
  TimeString = System_String__Format_64218220((System_String_o *)StringLiteral_25389/*"{0} {1}"*/, v9, (Il2CppObject *)v5, 0);
  if ( !log )
LABEL_8:
    sub_1C7BD40(TimeString, v8);
  SoundLogger_Info__add(log, TimeString, v12);
  index = v6->fields.index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index);
  v14 = System_String__Format_64218220((System_String_o *)StringLiteral_25425/*"{0}: {1}\n"*/, v13, (Il2CppObject *)v5, 0);
  v6->fields.last = v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v6->fields.last, (int32_t)v14, v15, v16, v17, v18, v19, v20);
}


System_String_o *SoundLogger_BgmDetailInfo__GetTimeString(SoundLogger_BgmDetailInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x0
  System_String_o *result; // x0
  __int64 v4; // x1
  int32_t stringLength; // w8
  float unscaledTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEDC3E & 1) == 0 )
  {
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25314/*"{0:00.000}"*/);
    byte_4CEDC3E = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0);
  v2 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &unscaledTime);
  result = System_String__Format((System_String_o *)StringLiteral_25314/*"{0:00.000}"*/, v2, 0);
  if ( !result )
    sub_1C7BD40(0, v4);
  stringLength = result->fields._stringLength;
  if ( stringLength >= 7 )
    return System_String__Substring_64222852(result, stringLength - 6, 6, 0);
  return result;
}


System_String_o *SoundLogger_BgmDetailInfo__ToStringAll(SoundLogger_BgmDetailInfo_o *this, const MethodInfo *method)
{
  struct SoundLogger_Info_o *log; // x0

  log = this->fields.log;
  if ( !log )
    sub_1C7BD40(0, method);
  return (System_String_o *)((__int64 (__fastcall *)(struct SoundLogger_Info_o *, const MethodInfo *))log->klass->vtable._3_ToString.methodPtr)(
                              log,
                              log->klass->vtable._3_ToString.method);
}


System_String_o *SoundLogger_BgmDetailInfo__ToStringLast(SoundLogger_BgmDetailInfo_o *this, const MethodInfo *method)
{
  return this->fields.last;
}


void SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  struct System_String_array *v5; // x0
  SoundLogger_Info_Fields *p_fields; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  unsigned __int64 v21; // x22
  __int64 v22; // x24
  struct System_String_array *buff; // x8
  int32_t v24; // w1
  System_Text_StringBuilder_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CEDC39 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_875/*"--------"*/);
    byte_4CEDC39 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.maxNum = maxBuff;
  v5 = (struct System_String_array *)sub_1C7BB90(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v5;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( maxBuff >= 1 )
  {
    v21 = 0;
    v22 = 32;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_1C7BD40(v13, v14);
      if ( v21 >= LODWORD(buff->max_length) )
        sub_1C7BD48(v13);
      v24 = StringLiteral_875/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v22) = (Il2CppClass *)StringLiteral_875/*"--------"*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)buff + v22), v24, v15, v16, v17, v18, v19, v20);
      ++v21;
      v22 += 8;
    }
    while ( maxBuff != v21 );
  }
  this->fields.currentIndex = -1;
  v25 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v25, 0);
  this->fields.sb = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.sb, (int32_t)v25, v26, v27, v28, v29, v30, v31);
}


System_String_o *SoundLogger_Info__ToString(SoundLogger_Info_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w24
  int32_t v6; // w23
  System_String_o **v7; // x8
  struct System_String_array *buff; // x8
  unsigned int v9; // w9

  if ( (byte_4CEDC3A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    sub_1C7BAE8(&StringLiteral_875/*"--------"*/);
    sub_1C7BAE8(&StringLiteral_1744/*">"*/);
    byte_4CEDC3A = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_875/*"--------"*/;
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_19;
  System_Text_StringBuilder__set_Length(sb, 0, 0);
  currentIndex = this->fields.currentIndex;
  maxNum = this->fields.maxNum;
  if ( currentIndex > currentIndex - maxNum )
  {
    v6 = this->fields.currentIndex;
    while ( 1 )
    {
      sb = this->fields.sb;
      if ( !sb )
        break;
      v7 = v6 == currentIndex ? (System_String_o **)&StringLiteral_1744/*">"*/ : (System_String_o **)&StringLiteral_113/*" "*/;
      sb = System_Text_StringBuilder__Append_64260872(sb, *v7, 0);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v9 = (maxNum & (v6 >> 31)) + v6;
      if ( v9 >= LODWORD(buff->max_length) )
        sub_1C7BD48(sb);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_64260872(sb, buff->m_Items[v9], 0);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_64260872(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v6 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_1C7BD40(sb, method);
  }
LABEL_16:
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_19;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))sb->klass->vtable._3_ToString.methodPtr)(
                              sb,
                              sb->klass->vtable._3_ToString.method);
}


void SoundLogger_Info__add(SoundLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_array *buff; // x8
  int32_t v9; // w9
  Il2CppClass **v10; // x0

  buff = this->fields.buff;
  v9 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v9;
  if ( !buff )
    sub_1C7BD40(this, name);
  if ( (unsigned int)v9 >= LODWORD(buff->max_length) )
    sub_1C7BD48(this);
  v10 = &buff->obj.klass + v9;
  v10[4] = (Il2CppClass *)name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 4), (int32_t)name, (int32_t)method, v3, v4, v5, v6, v7);
}


bool SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19

  v2 = this;
  if ( (byte_4CEDC3B & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_1C7BAE8(&SoundLogger_TypeInfo);
    byte_4CEDC3B = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= LODWORD(buff->max_length) )
    sub_1C7BD48(this);
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_11:
    sub_1C7BD40(this, method);
  return System_String__LastIndexOf_64237068(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0) == -1;
}