void SoundLogger___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596FD48 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    sub_2213A60(&StringLiteral_1564/*":NG"*/);
    byte_596FD48 = 1;
  }
  v7 = StringLiteral_1564/*":NG"*/;
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1564/*":NG"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)SoundLogger_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  SoundLogger_Info_o *v11; // x20
  const MethodInfo *v12; // x2
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  SoundLogger_Info_o *v19; // x20
  const MethodInfo *v20; // x2
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  BgmManager_c *v28; // x0
  struct SoundLogger_BgmDetailInfo_array *v29; // x0
  struct SoundLogger_BgmDetailInfo_array **p_bgmDetailLogs; // x19
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x0
  __int64 v38; // x1
  struct SoundLogger_BgmDetailInfo_array *v39; // x8
  unsigned __int64 v40; // x20
  __int64 v41; // x23
  SoundLogger_BgmDetailInfo_o *v42; // x21
  const MethodInfo *v43; // x2
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  unsigned int *v50; // x24
  __int64 v51; // x1
  __int64 v52; // x0

  if ( (byte_596FD3D & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_BgmDetailInfo___TypeInfo);
    sub_2213A60(&SoundLogger_BgmDetailInfo_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SoundLogger_Info_TypeInfo);
    byte_596FD3D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (SoundLogger_Info_o *)sub_2213CCC(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v3, 2, v4);
  this->fields.bgmLog = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (SoundLogger_Info_o *)sub_2213CCC(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v11, 5, v12);
  this->fields.voiceLog = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voiceLog, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  v19 = (SoundLogger_Info_o *)sub_2213CCC(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v19, 16, v20);
  this->fields.seLog = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.seLog, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  v28 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v27);
    v28 = BgmManager_TypeInfo;
  }
  v29 = (struct SoundLogger_BgmDetailInfo_array *)sub_2213B20(
                                                    SoundLogger_BgmDetailInfo___TypeInfo,
                                                    (unsigned int)v28->static_fields->BGM_PLAYER_MAX_COUNT);
  this->fields.bgmDetailLogs = v29;
  p_bgmDetailLogs = &this->fields.bgmDetailLogs;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_bgmDetailLogs, (int32_t)v29, v31, v32, v33, v34, v35, v36);
  v39 = *p_bgmDetailLogs;
  if ( !*p_bgmDetailLogs )
LABEL_13:
    sub_2213CDC(v37, v38);
  v40 = 0;
  v41 = 8;
  while ( (__int64)v40 < SLODWORD(v39->max_length) )
  {
    v42 = (SoundLogger_BgmDetailInfo_o *)sub_2213CCC(SoundLogger_BgmDetailInfo_TypeInfo);
    SoundLogger_BgmDetailInfo___ctor(v42, v40, v43);
    v50 = (unsigned int *)*p_bgmDetailLogs;
    if ( *p_bgmDetailLogs )
    {
      if ( v42 )
      {
        v37 = sub_2213BB4(v42, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
        if ( !v37 )
        {
          v52 = sub_2213D00(0, v51);
          sub_2213BA0(v52, 0);
        }
      }
      if ( v40 >= v50[6] )
        sub_2213CE4(v37);
      *(_QWORD *)&v50[2 * v40 + 8] = v42;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50[v41], (int32_t)v42, v44, v45, v46, v47, v48, v49);
      v39 = *p_bgmDetailLogs;
      ++v40;
      v41 += 2;
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

  if ( (byte_596FD42 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD42 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, actionName);
  Instance = (SoundLogger_BgmDetailInfo_o *)SoundLogger__get_Instance((const MethodInfo *)v7);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !Instance )
      goto LABEL_12;
    klass = Instance[1].klass;
    if ( !klass )
      goto LABEL_12;
    if ( SLODWORD(klass->_1.namespaze) > index )
    {
      Instance = (SoundLogger_BgmDetailInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + (unsigned int)index);
      if ( Instance )
      {
        SoundLogger_BgmDetailInfo__AddLog(Instance, actionName, opt, v10);
        return;
      }
LABEL_12:
      sub_2213CDC(Instance, v9);
    }
  }
}


System_String_o *SoundLogger__GetLogBgmDetail(int32_t index, const MethodInfo *method)
{
  SoundLogger_c *v3; // x0
  SoundLogger_o *Instance; // x0
  __int64 v5; // x1
  struct SoundLogger_BgmDetailInfo_array *bgmDetailLogs; // x8
  SoundLogger_BgmDetailInfo_o *v7; // x8
  System_String_o *v8; // x0

  if ( (byte_596FD47 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    sub_2213A60(&StringLiteral_26902/*"秒(切り捨て)  操作      内容\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FD47 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, method);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v3);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !Instance )
      goto LABEL_13;
    bgmDetailLogs = Instance->fields.bgmDetailLogs;
    if ( !bgmDetailLogs )
      goto LABEL_13;
    if ( SLODWORD(bgmDetailLogs->max_length) > index )
    {
      v7 = bgmDetailLogs->m_Items[index];
      if ( v7 )
      {
        Instance = (SoundLogger_o *)v7->fields.log;
        if ( Instance )
        {
          v8 = (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                                    Instance,
                                    Instance->klass->vtable._3_ToString.method);
          return System_String__Concat_75651716((System_String_o *)StringLiteral_26902/*"秒(切り捨て)  操作      内容\n"*/, v8, 0);
        }
      }
LABEL_13:
      sub_2213CDC(Instance, v5);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *SoundLogger__GetLogBgmDetailLast(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  System_String_o *result; // x0
  __int64 v4; // x1
  System_String_Fields fields; // x8
  System_String_o *v6; // x19
  __int64 v7; // x20
  int v8; // w9
  __int64 v9; // x8

  if ( (byte_596FD46 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FD46 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  result = (System_String_o *)SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !result || (fields = result[1].fields, v6 = result, !*(_QWORD *)&fields) )
LABEL_12:
    sub_2213CDC(result, v4);
  v7 = 0;
  result = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
    if ( (int)v7 >= v8 )
      return result;
    if ( (unsigned int)v7 >= v8 )
      sub_2213CE4(result);
    v9 = *(_QWORD *)(*(_QWORD *)&fields + 8 * v7 + 32);
    if ( v9 )
    {
      result = System_String__Concat_75651716(result, *(System_String_o **)(v9 + 32), 0);
      fields = v6[1].fields;
      ++v7;
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

  if ( (byte_596FD3E & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_26549/*"{0}/{1} {2}"*/);
    byte_596FD3E = 1;
  }
  v10 = (System_String_o *)StringLiteral_26549/*"{0}/{1} {2}"*/;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1/*""*/;
  }
  else
  {
    v12 = SoundLogger_TypeInfo;
    if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, info);
      v12 = SoundLogger_TypeInfo;
    }
    static_fields = (Il2CppObject **)v12->static_fields;
  }
  v13 = System_String__Format_75697948(v10, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0);
  if ( !info )
    sub_2213CDC(v13, v14);
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

  if ( (byte_596FD3F & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD3F = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, cueName);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_2213CDC(v9, v10);
  SoundLogger__addLog(v9, v9->fields.bgmLog, cueSheet, cueName, isValid, v11);
}


void SoundLogger__addLogSe(System_String_o *cueSheet, System_String_o *cueName, bool isValid, const MethodInfo *method)
{
  SoundLogger_c *v7; // x0
  SoundLogger_o *Instance; // x22
  SoundLogger_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_596FD41 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD41 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, cueName);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_2213CDC(v9, v10);
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

  if ( (byte_596FD40 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD40 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, cueName);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_2213CDC(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596FD43 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD43 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0 )
    sub_2213CDC(Instance, v4);
  return ((System_String_o *(__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
           Instance,
           Instance->klass->vtable._3_ToString.method);
}


System_String_o *SoundLogger__getLogSe(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596FD45 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD45 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0 )
    sub_2213CDC(Instance, v4);
  return ((System_String_o *(__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
           Instance,
           Instance->klass->vtable._3_ToString.method);
}


System_String_o *SoundLogger__getLogVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596FD44 & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD44 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0 )
    sub_2213CDC(Instance, v4);
  return ((System_String_o *(__fastcall *)(SoundLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
           Instance,
           Instance->klass->vtable._3_ToString.method);
}


SoundLogger_o *SoundLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *v3; // x19
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  SoundLogger_c *v12; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_596FD3C & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD3C = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v1);
    v2 = SoundLogger_TypeInfo;
  }
  if ( !v2->static_fields->instance )
  {
    v3 = (SoundLogger_o *)sub_2213CCC(v2);
    SoundLogger___ctor(v3, v4);
    v12 = SoundLogger_TypeInfo;
    if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, v5);
      v12 = SoundLogger_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->instance = v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->instance, (int32_t)v3, v6, v7, v8, v9, v10, v11);
    v2 = SoundLogger_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = SoundLogger_TypeInfo;
  }
  return v2->static_fields->instance;
}


bool SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return SoundLogger_Info__checkPlayLogLatest(info, (const MethodInfo *)info);
}


void SoundLogger_BgmDetailInfo___ctor(SoundLogger_BgmDetailInfo_o *this, int32_t index, const MethodInfo *method)
{
  SoundLogger_Info_c *v5; // x0
  SoundLogger_Info_o *v6; // x21
  const MethodInfo *v7; // x2
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596FD4C & 1) == 0 )
  {
    sub_2213A60(&SoundLogger_Info_TypeInfo);
    sub_2213A60(&StringLiteral_26555/*"{0}:\n"*/);
    byte_596FD4C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = SoundLogger_Info_TypeInfo;
  this->fields.index = index;
  v6 = (SoundLogger_Info_o *)sub_2213CCC(v5);
  SoundLogger_Info___ctor(v6, 40, v7);
  this->fields.log = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.log, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  v22 = index;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
  v15 = System_String__Format((System_String_o *)StringLiteral_26555/*"{0}:\n"*/, v14, 0);
  this->fields.last = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.last, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t index; // [xsp+Ch] [xbp-24h] BYREF

  v5 = actionName;
  v6 = this;
  if ( (byte_596FD4D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26562/*"{0}: {1}\n"*/);
    this = (SoundLogger_BgmDetailInfo_o *)sub_2213A60(&StringLiteral_26523/*"{0} {1}"*/);
    byte_596FD4D = 1;
  }
  TimeString = SoundLogger_BgmDetailInfo__GetTimeString(this, (const MethodInfo *)actionName);
  v9 = (Il2CppObject *)TimeString;
  if ( opt )
  {
    if ( !v5 )
      goto LABEL_8;
    v10 = System_String__PadRight(v5, 10, 0);
    v5 = System_String__Concat_75651716(v10, opt, 0);
  }
  log = v6->fields.log;
  TimeString = System_String__Format_75697880((System_String_o *)StringLiteral_26523/*"{0} {1}"*/, v9, (Il2CppObject *)v5, 0);
  if ( !log )
LABEL_8:
    sub_2213CDC(TimeString, v8);
  SoundLogger_Info__add(log, TimeString, v12);
  index = v6->fields.index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &index);
  v14 = System_String__Format_75697880((System_String_o *)StringLiteral_26562/*"{0}: {1}\n"*/, v13, (Il2CppObject *)v5, 0);
  v6->fields.last = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.last, (int32_t)v14, v15, v16, v17, v18, v19, v20);
}


System_String_o *SoundLogger_BgmDetailInfo__GetTimeString(SoundLogger_BgmDetailInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x0
  System_String_o *result; // x0
  __int64 v4; // x1
  int32_t stringLength; // w8
  float unscaledTime; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_596FD4E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26439/*"{0:00.000}"*/);
    byte_596FD4E = 1;
  }
  unscaledTime = UnityEngine_Time__get_unscaledTime(0);
  v2 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &unscaledTime);
  result = System_String__Format((System_String_o *)StringLiteral_26439/*"{0:00.000}"*/, v2, 0);
  if ( !result )
    sub_2213CDC(0, v4);
  stringLength = result->fields._stringLength;
  if ( stringLength >= 7 )
    return System_String__Substring_75702848(result, stringLength - 6, 6, 0);
  return result;
}


System_String_o *SoundLogger_BgmDetailInfo__ToStringAll(SoundLogger_BgmDetailInfo_o *this, const MethodInfo *method)
{
  struct SoundLogger_Info_o *log; // x0

  log = this->fields.log;
  if ( !log )
    sub_2213CDC(0, method);
  return ((System_String_o *(__fastcall *)(struct SoundLogger_Info_o *, const MethodInfo *))log->klass->vtable._3_ToString.methodPtr)(
           log,
           log->klass->vtable._3_ToString.method);
}


System_String_o *SoundLogger_BgmDetailInfo__ToStringLast(SoundLogger_BgmDetailInfo_o *this, const MethodInfo *method)
{
  return this->fields.last;
}


void SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  Il2CppClass *v5; // x0
  struct System_String_array *v6; // x0
  SoundLogger_Info_Fields *p_fields; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  unsigned __int64 v22; // x22
  __int64 v23; // x24
  struct System_String_array *buff; // x8
  int32_t v25; // w1
  System_Text_StringBuilder_o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_596FD49 & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_939/*"--------"*/);
    byte_596FD49 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = string___TypeInfo;
  this->fields.maxNum = maxBuff;
  v6 = (struct System_String_array *)sub_2213B20(v5, (unsigned int)maxBuff);
  this->fields.buff = v6;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  if ( maxBuff >= 1 )
  {
    v22 = 0;
    v23 = 32;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_2213CDC(v14, v15);
      if ( v22 >= LODWORD(buff->max_length) )
        sub_2213CE4(v14);
      v25 = StringLiteral_939/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v23) = (Il2CppClass *)StringLiteral_939/*"--------"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)buff + v23), v25, v16, v17, v18, v19, v20, v21);
      ++v22;
      v23 += 8;
    }
    while ( maxBuff != v22 );
  }
  this->fields.currentIndex = -1;
  v26 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v26, 0);
  this->fields.sb = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sb, (int32_t)v26, v27, v28, v29, v30, v31, v32);
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

  if ( (byte_596FD4A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_939/*"--------"*/);
    sub_2213A60(&StringLiteral_1831/*">"*/);
    byte_596FD4A = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_939/*"--------"*/;
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
      v7 = v6 == currentIndex ? (System_String_o **)&StringLiteral_1831/*">"*/ : (System_String_o **)&StringLiteral_113/*" "*/;
      sb = System_Text_StringBuilder__Append_75735064(sb, *v7, 0);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v9 = (maxNum & (v6 >> 31)) + v6;
      if ( v9 >= LODWORD(buff->max_length) )
        sub_2213CE4(sb);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_75735064(sb, buff->m_Items[v9], 0);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_75735064(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v6 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_2213CDC(sb, method);
  }
LABEL_16:
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_19;
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))sb->klass->vtable._3_ToString.methodPtr)(
           sb,
           sb->klass->vtable._3_ToString.method);
}


void SoundLogger_Info__add(SoundLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v8; // w8
  struct System_String_array *buff; // x9
  Il2CppClass **v10; // x0

  v8 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  buff = this->fields.buff;
  this->fields.currentIndex = v8;
  if ( !buff )
    sub_2213CDC(this, name);
  if ( (unsigned int)v8 >= LODWORD(buff->max_length) )
    sub_2213CE4(this);
  v10 = &buff->obj.klass + v8;
  v10[4] = (Il2CppClass *)name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v10 + 4),
    (int32_t)name,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19

  v2 = this;
  if ( (byte_596FD4B & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_2213A60(&SoundLogger_TypeInfo);
    byte_596FD4B = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= LODWORD(buff->max_length) )
    sub_2213CE4(this);
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !*(&SoundLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo, method);
  if ( !v5 )
LABEL_11:
    sub_2213CDC(this, method);
  return System_String__LastIndexOf_75716976(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0) == -1;
}