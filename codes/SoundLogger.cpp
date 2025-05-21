void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B43FC2 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_1510/*":NG"*/, v4);
    byte_4B43FC2 = 1;
  }
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1510/*":NG"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)SoundLogger_TypeInfo->static_fields, StringLiteral_1510/*":NG"*/, v2, v3);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SoundLogger_Info_o *v6; // x20
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  SoundLogger_Info_o *v10; // x20
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  SoundLogger_Info_o *v14; // x20
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BgmManager_c *v18; // x0
  struct SoundLogger_BgmDetailInfo_array *v19; // x0
  struct SoundLogger_BgmDetailInfo_array **p_bgmDetailLogs; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x0
  __int64 v24; // x1
  struct SoundLogger_BgmDetailInfo_array *v25; // x8
  unsigned __int64 v26; // x20
  __int64 v27; // x23
  SoundLogger_BgmDetailInfo_o *v28; // x21
  const MethodInfo *v29; // x2
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  unsigned int *v32; // x24
  __int64 v33; // x0

  if ( (byte_4B43FB7 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_BgmDetailInfo___TypeInfo, method);
    sub_1BDB878(&SoundLogger_BgmDetailInfo_TypeInfo, v3);
    sub_1BDB878(&BgmManager_TypeInfo, v4);
    sub_1BDB878(&SoundLogger_Info_TypeInfo, v5);
    byte_4B43FB7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (SoundLogger_Info_o *)sub_1BDBAC4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v6, 2, v7);
  this->fields.bgmLog = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v6, v8, v9);
  v10 = (SoundLogger_Info_o *)sub_1BDBAC4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v10, 5, v11);
  this->fields.voiceLog = v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.voiceLog, (int32_t)v10, v12, v13);
  v14 = (SoundLogger_Info_o *)sub_1BDBAC4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v14, 16, v15);
  this->fields.seLog = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.seLog, (int32_t)v14, v16, v17);
  v18 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v18 = BgmManager_TypeInfo;
  }
  v19 = (struct SoundLogger_BgmDetailInfo_array *)sub_1BDB920(
                                                    SoundLogger_BgmDetailInfo___TypeInfo,
                                                    (unsigned int)v18->static_fields->BGM_PLAYER_MAX_COUNT);
  this->fields.bgmDetailLogs = v19;
  p_bgmDetailLogs = &this->fields.bgmDetailLogs;
  sub_1BDB81C((CGThumbnailListItem_o *)p_bgmDetailLogs, (int32_t)v19, v21, v22);
  v25 = *p_bgmDetailLogs;
  if ( !*p_bgmDetailLogs )
LABEL_13:
    sub_1BDBAD4(v23, v24);
  v26 = 0LL;
  v27 = 8LL;
  while ( (__int64)v26 < (int)v25->max_length )
  {
    v28 = (SoundLogger_BgmDetailInfo_o *)sub_1BDBAC4(SoundLogger_BgmDetailInfo_TypeInfo);
    SoundLogger_BgmDetailInfo___ctor(v28, v26, v29);
    v32 = (unsigned int *)*p_bgmDetailLogs;
    if ( *p_bgmDetailLogs )
    {
      if ( v28 )
      {
        v23 = sub_1BDB9B4(v28, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
        if ( !v23 )
        {
          v33 = sub_1BDBAF8(0LL);
          sub_1BDB9A0(v33, 0LL);
        }
      }
      if ( v26 >= v32[6] )
        sub_1BDBADC(v23, v24, v30);
      *(_QWORD *)&v32[2 * v26 + 8] = v28;
      sub_1BDB81C((CGThumbnailListItem_o *)&v32[v27], (int32_t)v28, v30, v31);
      v25 = *p_bgmDetailLogs;
      ++v26;
      v27 += 2LL;
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  SoundLogger_BgmDetailInfo_c *klass; // x8
  int32_t namespaze; // w9

  if ( (byte_4B43FBC & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, actionName);
    byte_4B43FBC = 1;
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
        sub_1BDBADC(Instance, v9, v10);
      Instance = (SoundLogger_BgmDetailInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + (unsigned int)index);
      if ( Instance )
      {
        SoundLogger_BgmDetailInfo__AddLog(Instance, actionName, opt, v11);
        return;
      }
LABEL_14:
      sub_1BDBAD4(Instance, v9);
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
  __int64 v8; // x2
  struct SoundLogger_BgmDetailInfo_array *bgmDetailLogs; // x8
  int32_t max_length; // w9
  SoundLogger_BgmDetailInfo_o *v11; // x8
  System_String_o *v12; // x0

  if ( (byte_4B43FC1 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, method);
    sub_1BDB878(&StringLiteral_25584/*"秒(切り捨て)  操作      内容\n"*/, v3);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B43FC1 = 1;
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
        sub_1BDBADC(Instance, v7, v8);
      v11 = bgmDetailLogs->m_Items[index];
      if ( v11 )
      {
        Instance = (SoundLogger_o *)v11->fields.log;
        if ( Instance )
        {
          v12 = (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                     Instance,
                                     Instance->klass[1]._1.image);
          return System_String__Concat_62572260((System_String_o *)StringLiteral_25584/*"秒(切り捨て)  操作      内容\n"*/, v12, 0LL);
        }
      }
LABEL_15:
      sub_1BDBAD4(Instance, v7);
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
  __int64 v6; // x2
  System_String_Fields fields; // x8
  System_String_o *v8; // x19
  unsigned int v9; // w20
  unsigned int v10; // w9
  __int64 v11; // x8

  if ( (byte_4B43FC0 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_1/*""*/, v2);
    byte_4B43FC0 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  result = (System_String_o *)SoundLogger__get_Instance((const MethodInfo *)v3);
  if ( !result || (fields = result[1].fields, v8 = result, !*(_QWORD *)&fields) )
LABEL_12:
    sub_1BDBAD4(result, v5);
  v9 = 0;
  result = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
    if ( (int)v9 >= (int)v10 )
      return result;
    if ( v9 >= v10 )
      sub_1BDBADC(result, v5, v6);
    v11 = *(_QWORD *)(*(_QWORD *)&fields + 8LL * (int)v9 + 32);
    if ( v11 )
    {
      result = System_String__Concat_62572260(result, *(System_String_o **)(v11 + 32), 0LL);
      fields = v8[1].fields;
      ++v9;
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

  if ( (byte_4B43FB8 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, info);
    sub_1BDB878(&StringLiteral_1/*""*/, v10);
    sub_1BDB878(&StringLiteral_25245/*"{0}/{1} {2}"*/, v11);
    byte_4B43FB8 = 1;
  }
  v12 = (System_String_o *)StringLiteral_25245/*"{0}/{1} {2}"*/;
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
  v15 = System_String__Format_62613620(v12, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_1BDBAD4(v15, v16);
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

  if ( (byte_4B43FB9 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, cueName);
    byte_4B43FB9 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BDBAD4(v9, v10);
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

  if ( (byte_4B43FBB & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, cueName);
    byte_4B43FBB = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BDBAD4(v9, v10);
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

  if ( (byte_4B43FBA & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, cueName);
    byte_4B43FBA = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1BDBAD4(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B43FBD & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, v1);
    byte_4B43FBD = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_1BDBAD4(Instance, v4);
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

  if ( (byte_4B43FBF & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, v1);
    byte_4B43FBF = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_1BDBAD4(Instance, v4);
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

  if ( (byte_4B43FBE & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, v1);
    byte_4B43FBE = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_1BDBAD4(Instance, v4);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  SoundLogger_c *v7; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_4B43FB6 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_TypeInfo, v1);
    byte_4B43FB6 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v2 = SoundLogger_TypeInfo;
  }
  if ( !v2->static_fields->instance )
  {
    v3 = (SoundLogger_o *)sub_1BDBAC4(v2);
    SoundLogger___ctor(v3, v4);
    v7 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v7 = SoundLogger_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->instance = v3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->instance, (int32_t)v3, v5, v6);
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
    sub_1BDBAD4(this, 0LL);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B43FC6 & 1) == 0 )
  {
    sub_1BDB878(&SoundLogger_Info_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&int_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_25251/*"{0}:\n"*/, v6);
    byte_4B43FC6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = index;
  v7 = (SoundLogger_Info_o *)sub_1BDBAC4(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v7, 40, v8);
  this->fields.log = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.log, (int32_t)v7, v9, v10);
  v18 = index;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
  v15 = System_String__Format((System_String_o *)StringLiteral_25251/*"{0}:\n"*/, v14, 0LL);
  this->fields.last = v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.last, (int32_t)v15, v16, v17);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t index; // [xsp+Ch] [xbp-34h] BYREF

  v5 = actionName;
  v6 = this;
  if ( (byte_4B43FC7 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, actionName);
    sub_1BDB878(&StringLiteral_25257/*"{0}: {1}\n"*/, v7);
    this = (SoundLogger_BgmDetailInfo_o *)sub_1BDB878(&StringLiteral_25210/*"{0} {1}"*/, v8);
    byte_4B43FC7 = 1;
  }
  TimeString = SoundLogger_BgmDetailInfo__GetTimeString(this, (const MethodInfo *)actionName);
  v11 = (Il2CppObject *)TimeString;
  if ( opt )
  {
    if ( !v5 )
      goto LABEL_8;
    v12 = System_String__PadRight(v5, 10, 0LL);
    v5 = System_String__Concat_62572260(v12, opt, 0LL);
  }
  log = v6->fields.log;
  TimeString = System_String__Format_62613552((System_String_o *)StringLiteral_25210/*"{0} {1}"*/, v11, (Il2CppObject *)v5, 0LL);
  if ( !log )
LABEL_8:
    sub_1BDBAD4(TimeString, v10);
  SoundLogger_Info__add(log, TimeString, v14);
  index = v6->fields.index;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index, v15, v16, v17);
  v19 = System_String__Format_62613552((System_String_o *)StringLiteral_25257/*"{0}: {1}\n"*/, v18, (Il2CppObject *)v5, 0LL);
  v6->fields.last = v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields.last, (int32_t)v19, v20, v21);
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

  if ( (byte_4B43FC8 & 1) == 0 )
  {
    sub_1BDB878(&float_TypeInfo, method);
    sub_1BDB878(&StringLiteral_25133/*"{0:00.000}"*/, v2);
    byte_4B43FC8 = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &unscaledTime, v3, v4, v5);
  result = System_String__Format((System_String_o *)StringLiteral_25133/*"{0:00.000}"*/, v6, 0LL);
  if ( !result )
    sub_1BDBAD4(0LL, v8);
  stringLength = result->fields._stringLength;
  if ( stringLength >= 7 )
    return System_String__Substring_62618184(result, stringLength - 6, 6, 0LL);
  return result;
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__ToStringAll(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  struct SoundLogger_Info_o *log; // x0

  log = this->fields.log;
  if ( !log )
    sub_1BDBAD4(0LL, method);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  struct System_String_array *buff; // x8
  int32_t v18; // w1
  System_Text_StringBuilder_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B43FC3 & 1) == 0 )
  {
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&maxBuff);
    sub_1BDB878(&string___TypeInfo, v5);
    sub_1BDB878(&StringLiteral_887/*"--------"*/, v6);
    byte_4B43FC3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v7 = (struct System_String_array *)sub_1BDB920(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v7;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v9, v10);
  if ( maxBuff >= 1 )
  {
    v15 = 0LL;
    v16 = 32LL;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_1BDBAD4(v11, v12);
      if ( v15 >= buff->max_length )
        sub_1BDBADC(v11, v12, v13);
      v18 = StringLiteral_887/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v16) = (Il2CppClass *)StringLiteral_887/*"--------"*/;
      sub_1BDB81C((CGThumbnailListItem_o *)((char *)buff + v16), v18, v13, v14);
      ++v15;
      v16 += 8LL;
    }
    while ( maxBuff != v15 );
  }
  this->fields.currentIndex = -1;
  v19 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  this->fields.sb = v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sb, (int32_t)v19, v20, v21);
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
  __int64 v11; // x2
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v13; // w9

  if ( (byte_4B43FC4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_43/*"\n"*/, method);
    sub_1BDB878(&StringLiteral_115/*" "*/, v3);
    sub_1BDB878(&StringLiteral_887/*"--------"*/, v4);
    sub_1BDB878(&StringLiteral_1773/*">"*/, v5);
    byte_4B43FC4 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_887/*"--------"*/;
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
      v10 = v9 == currentIndex ? (System_String_o **)&StringLiteral_1773/*">"*/ : (System_String_o **)&StringLiteral_115/*" "*/;
      sb = System_Text_StringBuilder__Append_62657444(sb, *v10, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v13 = (maxNum & (v9 >> 31)) + v9;
      if ( v13 >= buff->max_length )
        sub_1BDBADC(sb, method, v11);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_62657444(sb, buff->m_Items[v13], 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_62657444(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v9 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_1BDBAD4(sb, method);
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
  const MethodInfo *v3; // x3
  struct System_String_array *buff; // x8
  int v5; // w9
  Il2CppClass **v6; // x0

  buff = this->fields.buff;
  v5 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v5;
  if ( !buff )
    sub_1BDBAD4(this, name);
  if ( v5 >= buff->max_length )
    sub_1BDBADC(this, name, method);
  v6 = &buff->obj.klass + v5;
  v6[4] = (Il2CppClass *)name;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 4), (int32_t)name, (int32_t)method, v3);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SoundLogger_Info_o *v3; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v6; // x19

  v3 = this;
  if ( (byte_4B43FC5 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_1BDB878(&SoundLogger_TypeInfo, method);
    byte_4B43FC5 = 1;
  }
  currentIndex = v3->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v3->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= buff->max_length )
    sub_1BDBADC(this, method, v2);
  v6 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v6 )
LABEL_11:
    sub_1BDBAD4(this, method);
  return System_String__LastIndexOf_62632520(v6, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}