void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5A70C & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    sub_1B885B0(&StringLiteral_1575/*":NG"*/);
    byte_4A5A70C = 1;
  }
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1575/*":NG"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SoundLogger_TypeInfo->static_fields, StringLiteral_1575/*":NG"*/, v1, v2);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  int32_t v6; // w3
  SoundLogger_Info_o *v7; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  int32_t v10; // w3
  SoundLogger_Info_o *v11; // x20
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  int32_t v14; // w3
  BgmManager_c *v15; // x0
  struct SoundLogger_BgmDetailInfo_array *v16; // x0
  struct SoundLogger_BgmDetailInfo_array **p_bgmDetailLogs; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0
  __int64 v21; // x1
  struct SoundLogger_BgmDetailInfo_array *v22; // x8
  unsigned __int64 v23; // x20
  __int64 v24; // x23
  SoundLogger_BgmDetailInfo_o *v25; // x21
  const MethodInfo *v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3
  unsigned int *v29; // x24
  __int64 v30; // x0

  if ( (byte_4A5A701 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_BgmDetailInfo___TypeInfo);
    sub_1B885B0(&SoundLogger_BgmDetailInfo_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&SoundLogger_Info_TypeInfo);
    byte_4A5A701 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (SoundLogger_Info_o *)sub_1B887FC(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v3, 2, v4);
  this->fields.bgmLog = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v5, v6);
  v7 = (SoundLogger_Info_o *)sub_1B887FC(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v7, 5, v8);
  this->fields.voiceLog = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voiceLog, (int32_t)v7, v9, v10);
  v11 = (SoundLogger_Info_o *)sub_1B887FC(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v11, 16, v12);
  this->fields.seLog = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seLog, (int32_t)v11, v13, v14);
  v15 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v15 = BgmManager_TypeInfo;
  }
  v16 = (struct SoundLogger_BgmDetailInfo_array *)sub_1B88658(
                                                    SoundLogger_BgmDetailInfo___TypeInfo,
                                                    (unsigned int)v15->static_fields->BGM_PLAYER_MAX_COUNT);
  this->fields.bgmDetailLogs = v16;
  p_bgmDetailLogs = &this->fields.bgmDetailLogs;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_bgmDetailLogs, (int32_t)v16, v18, v19);
  v22 = *p_bgmDetailLogs;
  if ( !*p_bgmDetailLogs )
LABEL_13:
    sub_1B8880C(v20, v21);
  v23 = 0LL;
  v24 = 8LL;
  while ( (__int64)v23 < (int)v22->max_length )
  {
    v25 = (SoundLogger_BgmDetailInfo_o *)sub_1B887FC(SoundLogger_BgmDetailInfo_TypeInfo);
    SoundLogger_BgmDetailInfo___ctor(v25, v23, v26);
    v29 = (unsigned int *)*p_bgmDetailLogs;
    if ( *p_bgmDetailLogs )
    {
      if ( v25 )
      {
        v20 = sub_1B886EC(v25, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
        if ( !v20 )
        {
          v30 = sub_1B88830(0LL);
          sub_1B886D8(v30, 0LL);
        }
      }
      if ( v23 >= v29[6] )
        sub_1B88814(v20, v21);
      *(_QWORD *)&v29[2 * v23 + 8] = v25;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v29[v24], (int32_t)v25, v27, v28);
      v22 = *p_bgmDetailLogs;
      ++v23;
      v24 += 2LL;
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

  if ( (byte_4A5A706 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A706 = 1;
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
        sub_1B88814(Instance, v9);
      Instance = (SoundLogger_BgmDetailInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + (unsigned int)index);
      if ( Instance )
      {
        SoundLogger_BgmDetailInfo__AddLog(Instance, actionName, opt, v10);
        return;
      }
LABEL_14:
      sub_1B8880C(Instance, v9);
    }
  }
}


System_String_o *__fastcall SoundLogger__GetLogBgmDetail(int32_t index, const MethodInfo *method)
{
  SoundLogger_c *v3; // x0
  SoundLogger_o *Instance; // x0
  __int64 v5; // x1
  struct SoundLogger_BgmDetailInfo_array *bgmDetailLogs; // x8
  int32_t max_length; // w9
  SoundLogger_BgmDetailInfo_o *v8; // x8
  System_String_o *v9; // x0

  if ( (byte_4A5A70B & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    sub_1B885B0(&StringLiteral_25384/*"秒(切り捨て)  操作      内容\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A70B = 1;
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
        sub_1B88814(Instance, v5);
      v8 = bgmDetailLogs->m_Items[index];
      if ( v8 )
      {
        Instance = (SoundLogger_o *)v8->fields.log;
        if ( Instance )
        {
          v9 = (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                    Instance,
                                    Instance->klass[1]._1.image);
          return System_String__Concat_61707032((System_String_o *)StringLiteral_25384/*"秒(切り捨て)  操作      内容\n"*/, v9, 0LL);
        }
      }
LABEL_15:
      sub_1B8880C(Instance, v5);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall SoundLogger__GetLogBgmDetailLast(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  System_String_o *result; // x0
  __int64 v3; // x1
  System_String_Fields fields; // x8
  System_String_o *v5; // x19
  unsigned int v6; // w20
  unsigned int v7; // w9
  __int64 v8; // x8

  if ( (byte_4A5A70A & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A70A = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  result = (System_String_o *)SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !result || (fields = result[1].fields, v5 = result, !*(_QWORD *)&fields) )
LABEL_12:
    sub_1B8880C(result, v3);
  v6 = 0;
  result = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
    if ( (int)v6 >= (int)v7 )
      return result;
    if ( v6 >= v7 )
      sub_1B88814(result, v3);
    v8 = *(_QWORD *)(*(_QWORD *)&fields + 8LL * (int)v6 + 32);
    if ( v8 )
    {
      result = System_String__Concat_61707032(result, *(System_String_o **)(v8 + 32), 0LL);
      fields = v5[1].fields;
      ++v6;
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
  System_String_o *v10; // x22
  Il2CppObject **static_fields; // x8
  SoundLogger_c *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4A5A702 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_25055/*"{0}/{1} {2}"*/);
    byte_4A5A702 = 1;
  }
  v10 = (System_String_o *)StringLiteral_25055/*"{0}/{1} {2}"*/;
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
  v13 = System_String__Format_61721472(v10, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_1B8880C(v13, v14);
  SoundLogger_Info__add(info, v13, v15);
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

  if ( (byte_4A5A703 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A703 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B8880C(v9, v10);
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

  if ( (byte_4A5A705 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A705 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B8880C(v9, v10);
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

  if ( (byte_4A5A704 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A704 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B8880C(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5A707 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A707 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_1B8880C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5A709 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A709 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_1B8880C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5A708 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A708 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_1B8880C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


SoundLogger_o *__fastcall SoundLogger__get_Instance(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *v2; // x19
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  SoundLogger_c *v6; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_4A5A700 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A700 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v1 = SoundLogger_TypeInfo;
  }
  if ( !v1->static_fields->instance )
  {
    v2 = (SoundLogger_o *)sub_1B887FC(v1);
    SoundLogger___ctor(v2, v3);
    v6 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v6 = SoundLogger_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->instance = v2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->instance, (int32_t)v2, v4, v5);
    v1 = SoundLogger_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = SoundLogger_TypeInfo;
  }
  return v1->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_1B8880C(this, 0LL);
  return SoundLogger_Info__checkPlayLogLatest(info, (const MethodInfo *)info);
}


void __fastcall SoundLogger_BgmDetailInfo___ctor(
        SoundLogger_BgmDetailInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SoundLogger_Info_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A710 & 1) == 0 )
  {
    sub_1B885B0(&SoundLogger_Info_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25061/*"{0}:\n"*/);
    byte_4A5A710 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = index;
  v5 = (SoundLogger_Info_o *)sub_1B887FC(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v5, 40, v6);
  this->fields.log = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.log, (int32_t)v5, v7, v8);
  v16 = index;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v9, v10, v11);
  v13 = System_String__Format((System_String_o *)StringLiteral_25061/*"{0}:\n"*/, v12, 0LL);
  this->fields.last = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.last, (int32_t)v13, v14, v15);
}


void __fastcall SoundLogger_BgmDetailInfo__AddLog(
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t index; // [xsp+Ch] [xbp-34h] BYREF

  v5 = actionName;
  v6 = this;
  if ( (byte_4A5A711 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25067/*"{0}: {1}\n"*/);
    this = (SoundLogger_BgmDetailInfo_o *)sub_1B885B0(&StringLiteral_25017/*"{0} {1}"*/);
    byte_4A5A711 = 1;
  }
  TimeString = SoundLogger_BgmDetailInfo__GetTimeString(this, (const MethodInfo *)actionName);
  v9 = (Il2CppObject *)TimeString;
  if ( opt )
  {
    if ( !v5 )
      goto LABEL_8;
    v10 = System_String__PadRight(v5, 10, 0LL);
    v5 = System_String__Concat_61707032(v10, opt, 0LL);
  }
  log = v6->fields.log;
  TimeString = System_String__Format_61721404((System_String_o *)StringLiteral_25017/*"{0} {1}"*/, v9, (Il2CppObject *)v5, 0LL);
  if ( !log )
LABEL_8:
    sub_1B8880C(TimeString, v8);
  SoundLogger_Info__add(log, TimeString, v12);
  index = v6->fields.index;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index, v13, v14, v15);
  v17 = System_String__Format_61721404((System_String_o *)StringLiteral_25067/*"{0}: {1}\n"*/, v16, (Il2CppObject *)v5, 0LL);
  v6->fields.last = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.last, (int32_t)v17, v18, v19);
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__GetTimeString(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x0
  System_String_o *result; // x0
  __int64 v7; // x1
  int32_t stringLength; // w8
  float unscaledTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A712 & 1) == 0 )
  {
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_24939/*"{0:00.000}"*/);
    byte_4A5A712 = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &unscaledTime, v2, v3, v4);
  result = System_String__Format((System_String_o *)StringLiteral_24939/*"{0:00.000}"*/, v5, 0LL);
  if ( !result )
    sub_1B8880C(0LL, v7);
  stringLength = result->fields._stringLength;
  if ( stringLength >= 7 )
    return System_String__Substring_61726036(result, stringLength - 6, 6, 0LL);
  return result;
}


System_String_o *__fastcall SoundLogger_BgmDetailInfo__ToStringAll(
        SoundLogger_BgmDetailInfo_o *this,
        const MethodInfo *method)
{
  struct SoundLogger_Info_o *log; // x0

  log = this->fields.log;
  if ( !log )
    sub_1B8880C(0LL, method);
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


void __fastcall SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  struct System_String_array *v5; // x0
  SoundLogger_Info_Fields *p_fields; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned __int64 v13; // x22
  __int64 v14; // x24
  struct System_String_array *buff; // x8
  int32_t v16; // w1
  System_Text_StringBuilder_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5A70D & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_936/*"--------"*/);
    byte_4A5A70D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v5 = (struct System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v5;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v7, v8);
  if ( maxBuff >= 1 )
  {
    v13 = 0LL;
    v14 = 32LL;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_1B8880C(v9, v10);
      if ( v13 >= buff->max_length )
        sub_1B88814(v9, v10);
      v16 = StringLiteral_936/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v14) = (Il2CppClass *)StringLiteral_936/*"--------"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)buff + v14), v16, v11, v12);
      ++v13;
      v14 += 8LL;
    }
    while ( maxBuff != v13 );
  }
  this->fields.currentIndex = -1;
  v17 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v17, 0LL);
  this->fields.sb = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sb, (int32_t)v17, v18, v19);
}


System_String_o *__fastcall SoundLogger_Info__ToString(SoundLogger_Info_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w24
  int32_t v6; // w23
  System_String_o **v7; // x8
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v9; // w9

  if ( (byte_4A5A70E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_936/*"--------"*/);
    sub_1B885B0(&StringLiteral_1861/*">"*/);
    byte_4A5A70E = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_936/*"--------"*/;
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_19;
  System_Text_StringBuilder__set_Length(sb, 0, 0LL);
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
      v7 = v6 == currentIndex ? (System_String_o **)&StringLiteral_1861/*">"*/ : (System_String_o **)&StringLiteral_117/*" "*/;
      sb = System_Text_StringBuilder__Append_60868928(sb, *v7, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v9 = (maxNum & (v6 >> 31)) + v6;
      if ( v9 >= buff->max_length )
        sub_1B88814(sb, method);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_60868928(sb, buff->m_Items[v9], 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_60868928(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v6 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_1B8880C(sb, method);
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
  struct System_String_array *buff; // x8
  int v5; // w9
  Il2CppClass **v6; // x0

  buff = this->fields.buff;
  v5 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v5;
  if ( !buff )
    sub_1B8880C(this, name);
  if ( v5 >= buff->max_length )
    sub_1B88814(this, name);
  v6 = &buff->obj.klass + v5;
  v6[4] = (Il2CppClass *)name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 4), (int32_t)name, (int32_t)method, v3);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19

  v2 = this;
  if ( (byte_4A5A70F & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_1B885B0(&SoundLogger_TypeInfo);
    byte_4A5A70F = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= buff->max_length )
    sub_1B88814(this, method);
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_11:
    sub_1B8880C(this, method);
  return System_String__LastIndexOf_61740372(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}