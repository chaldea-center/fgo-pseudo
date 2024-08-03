void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FB9C6 & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_1577/*":NG"*/, v4);
    byte_49FB9C6 = 1;
  }
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1577/*":NG"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SoundLogger_TypeInfo->static_fields, StringLiteral_1577/*":NG"*/, v2, v3);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  SoundLogger_Info_o *v8; // x20
  const MethodInfo *v9; // x2
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  SoundLogger_Info_o *v14; // x20
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  SoundLogger_Info_o *v20; // x20
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  BgmManager_c *v24; // x0
  struct SoundLogger_BgmVolumeInfo_array *v25; // x0
  struct SoundLogger_BgmVolumeInfo_array **p_bgmVolumeLogs; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  struct SoundLogger_BgmVolumeInfo_array *v32; // x8
  unsigned __int64 v33; // x20
  __int64 v34; // x23
  SoundLogger_BgmVolumeInfo_o *v35; // x21
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  unsigned int *v40; // x24
  __int64 v41; // x0

  if ( (byte_49FB9BB & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&SoundLogger_BgmVolumeInfo___TypeInfo, v3);
    sub_1B640C8(&SoundLogger_BgmVolumeInfo_TypeInfo, v4);
    sub_1B640C8(&SoundLogger_Info_TypeInfo, v5);
    byte_49FB9BB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (SoundLogger_Info_o *)sub_1B64314(SoundLogger_Info_TypeInfo, v6, v7);
  SoundLogger_Info___ctor(v8, 2, v9);
  this->fields.bgmLog = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v8, v10, v11);
  v14 = (SoundLogger_Info_o *)sub_1B64314(SoundLogger_Info_TypeInfo, v12, v13);
  SoundLogger_Info___ctor(v14, 5, v15);
  this->fields.voiceLog = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceLog, (int32_t)v14, v16, v17);
  v20 = (SoundLogger_Info_o *)sub_1B64314(SoundLogger_Info_TypeInfo, v18, v19);
  SoundLogger_Info___ctor(v20, 16, v21);
  this->fields.seLog = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seLog, (int32_t)v20, v22, v23);
  v24 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v24 = BgmManager_TypeInfo;
  }
  v25 = (struct SoundLogger_BgmVolumeInfo_array *)sub_1B64170(
                                                    SoundLogger_BgmVolumeInfo___TypeInfo,
                                                    (unsigned int)v24->static_fields->BGM_PLAYER_MAX_COUNT);
  this->fields.bgmVolumeLogs = v25;
  p_bgmVolumeLogs = &this->fields.bgmVolumeLogs;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_bgmVolumeLogs, (int32_t)v25, v27, v28);
  v32 = *p_bgmVolumeLogs;
  if ( !*p_bgmVolumeLogs )
LABEL_13:
    sub_1B64324(v29);
  v33 = 0LL;
  v34 = 8LL;
  while ( (__int64)v33 < (int)v32->max_length )
  {
    v35 = (SoundLogger_BgmVolumeInfo_o *)sub_1B64314(SoundLogger_BgmVolumeInfo_TypeInfo, v30, v31);
    SoundLogger_BgmVolumeInfo___ctor(v35, v33, v36);
    v40 = (unsigned int *)*p_bgmVolumeLogs;
    if ( *p_bgmVolumeLogs )
    {
      if ( v35 )
      {
        v29 = sub_1B64204(v35, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
        if ( !v29 )
        {
          v41 = sub_1B64348(0LL);
          sub_1B641F0(v41, 0LL);
        }
      }
      if ( v33 >= v40[6] )
        sub_1B6432C(v29, v37);
      *(_QWORD *)&v40[2 * v33 + 8] = v35;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40[v34], (int32_t)v35, v38, v39);
      v32 = *p_bgmVolumeLogs;
      ++v33;
      v34 += 2LL;
      if ( *p_bgmVolumeLogs )
        continue;
    }
    goto LABEL_13;
  }
}


void __fastcall SoundLogger__AddLogBgmVolume(
        int32_t index,
        System_String_o *bgmName,
        float volume1,
        float volume2,
        const MethodInfo *method)
{
  SoundLogger_c *v9; // x0
  SoundLogger_BgmVolumeInfo_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  SoundLogger_BgmVolumeInfo_c *klass; // x8
  int32_t namespaze; // w9

  if ( (byte_49FB9C0 & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, bgmName);
    byte_49FB9C0 = 1;
  }
  v9 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = (SoundLogger_BgmVolumeInfo_o *)SoundLogger__get_Instance((const MethodInfo *)v9);
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
        sub_1B6432C(Instance, v11);
      Instance = (SoundLogger_BgmVolumeInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + (unsigned int)index);
      if ( Instance )
      {
        SoundLogger_BgmVolumeInfo__AddLog(Instance, bgmName, volume1, volume2, v12);
        return;
      }
LABEL_14:
      sub_1B64324(Instance);
    }
  }
}


System_String_o *__fastcall SoundLogger__GetLogBgmVolumeDetail(int32_t index, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SoundLogger_c *v5; // x0
  SoundLogger_o *Instance; // x0
  __int64 v7; // x1
  struct SoundLogger_BgmVolumeInfo_array *bgmVolumeLogs; // x8
  int32_t max_length; // w9
  SoundLogger_BgmVolumeInfo_o *v10; // x8
  System_String_o *v11; // x0

  if ( (byte_49FB9C5 & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, method);
    sub_1B640C8(&StringLiteral_25282/*"秒:ミリ秒  音量1  音量2  BGM名\n"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FB9C5 = 1;
  }
  v5 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v5);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !Instance )
      goto LABEL_15;
    bgmVolumeLogs = Instance->fields.bgmVolumeLogs;
    if ( !bgmVolumeLogs )
      goto LABEL_15;
    max_length = bgmVolumeLogs->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1B6432C(Instance, v7);
      v10 = bgmVolumeLogs->m_Items[index];
      if ( v10 )
      {
        Instance = (SoundLogger_o *)v10->fields.log;
        if ( Instance )
        {
          v11 = (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                                     Instance,
                                     Instance->klass[1]._1.image);
          return System_String__Concat_61375396((System_String_o *)StringLiteral_25282/*"秒:ミリ秒  音量1  音量2  BGM名\n"*/, v11, 0LL);
        }
      }
LABEL_15:
      sub_1B64324(Instance);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall SoundLogger__GetLogBgmVolumeSimple(const MethodInfo *method)
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

  if ( (byte_49FB9C4 & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_1/*""*/, v2);
    byte_49FB9C4 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  result = (System_String_o *)SoundLogger__get_Instance((const MethodInfo *)v3);
  if ( !result || (fields = result[1].fields, v7 = result, !*(_QWORD *)&fields) )
LABEL_12:
    sub_1B64324(result);
  v8 = 0;
  result = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
    if ( (int)v8 >= (int)v9 )
      return result;
    if ( v8 >= v9 )
      sub_1B6432C(result, v5);
    v10 = *(_QWORD *)(*(_QWORD *)&fields + 8LL * (int)v8 + 32);
    if ( v10 )
    {
      result = System_String__Concat_61375396(result, *(System_String_o **)(v10 + 32), 0LL);
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
  const MethodInfo *v16; // x2

  if ( (byte_49FB9BC & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, info);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    sub_1B640C8(&StringLiteral_24955/*"{0}/{1} {2}"*/, v11);
    byte_49FB9BC = 1;
  }
  v12 = (System_String_o *)StringLiteral_24955/*"{0}/{1} {2}"*/;
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
  v15 = System_String__Format_61389836(v12, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_1B64324(v15);
  SoundLogger_Info__add(info, v15, v16);
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
  const MethodInfo *v10; // x5

  if ( (byte_49FB9BD & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, cueName);
    byte_49FB9BD = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B64324(v9);
  SoundLogger__addLog(v9, v9->fields.bgmLog, cueSheet, cueName, isValid, v10);
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
  const MethodInfo *v10; // x5

  if ( (byte_49FB9BF & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, cueName);
    byte_49FB9BF = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B64324(v9);
  SoundLogger__addLog(v9, v9->fields.seLog, cueSheet, cueName, isValid, v10);
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
  const MethodInfo *v10; // x5

  if ( (byte_49FB9BE & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, cueName);
    byte_49FB9BE = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B64324(v9);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v10);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0

  if ( (byte_49FB9C1 & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, v1);
    byte_49FB9C1 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_1B64324(Instance);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0

  if ( (byte_49FB9C3 & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, v1);
    byte_49FB9C3 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_1B64324(Instance);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0

  if ( (byte_49FB9C2 & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, v1);
    byte_49FB9C2 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_1B64324(Instance);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


SoundLogger_o *__fastcall SoundLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SoundLogger_c *v3; // x0
  SoundLogger_o *v4; // x19
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  SoundLogger_c *v8; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_49FB9BA & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_TypeInfo, v1);
    byte_49FB9BA = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v3 = SoundLogger_TypeInfo;
  }
  if ( !v3->static_fields->instance )
  {
    v4 = (SoundLogger_o *)sub_1B64314(v3, v1, v2);
    SoundLogger___ctor(v4, v5);
    v8 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v8 = SoundLogger_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->instance = v4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->instance, (int32_t)v4, v6, v7);
    v3 = SoundLogger_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = SoundLogger_TypeInfo;
  }
  return v3->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_1B64324(this);
  return SoundLogger_Info__checkPlayLogLatest(info, (const MethodInfo *)info);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger_BgmVolumeInfo___ctor(
        SoundLogger_BgmVolumeInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  SoundLogger_Info_o *v9; // x21
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB9CA & 1) == 0 )
  {
    sub_1B640C8(&SoundLogger_Info_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_24961/*"{0}:\n"*/, v6);
    byte_49FB9CA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = index;
  v9 = (SoundLogger_Info_o *)sub_1B64314(SoundLogger_Info_TypeInfo, v7, v8);
  SoundLogger_Info___ctor(v9, 40, v10);
  this->fields.log = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.log, (int32_t)v9, v11, v12);
  v17 = index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14 = System_String__Format((System_String_o *)StringLiteral_24961/*"{0}:\n"*/, v13, 0LL);
  this->fields.last = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.last, (int32_t)v14, v15, v16);
}


void __fastcall SoundLogger_BgmVolumeInfo__AddLog(
        SoundLogger_BgmVolumeInfo_o *this,
        System_String_o *bgmName,
        float volume1,
        float volume2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  SoundLogger_Info_o *log; // x21
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t index; // [xsp+Ch] [xbp-64h] BYREF
  float v30; // [xsp+10h] [xbp-60h] BYREF
  float v31; // [xsp+14h] [xbp-5Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-58h] BYREF
  System_DateTime_o v33; // 0:x0.8

  if ( (byte_49FB9CB & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, bgmName);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&float_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_117/*" "*/, v11);
    sub_1B640C8(&StringLiteral_352/*" {1} {2}{0}"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    sub_1B640C8(&StringLiteral_23373/*"ss:fff"*/, v14);
    sub_1B640C8(&StringLiteral_24976/*"{0}:{1}\n"*/, v15);
    byte_49FB9CB = 1;
  }
  dateData = 0LL;
  if ( bgmName )
    v16 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_117/*" "*/, bgmName, 0LL);
  else
    v16 = (Il2CppObject *)StringLiteral_1/*""*/;
  v31 = volume1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v31);
  v30 = volume2;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v30);
  v19 = System_String__Format_61389836((System_String_o *)StringLiteral_352/*" {1} {2}{0}"*/, v16, v17, v18, 0LL);
  log = this->fields.log;
  v21 = v19;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v33.fields._dateData = (uint64_t)&dateData;
  v22 = System_DateTime__ToString_62066032(v33, (System_String_o *)StringLiteral_23373/*"ss:fff"*/, 0LL);
  if ( !v22
    || (v23 = System_String__PadRight(v22, 6, 0x30u, 0LL), v22 = System_String__Concat_61375396(v23, v21, 0LL), !log) )
  {
    sub_1B64324(v22);
  }
  SoundLogger_Info__add(log, v22, v24);
  index = this->fields.index;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index);
  v26 = System_String__Format_61389768((System_String_o *)StringLiteral_24976/*"{0}:{1}\n"*/, v25, (Il2CppObject *)v21, 0LL);
  this->fields.last = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.last, (int32_t)v26, v27, v28);
}


System_String_o *__fastcall SoundLogger_BgmVolumeInfo__ToStringDetail(
        SoundLogger_BgmVolumeInfo_o *this,
        const MethodInfo *method)
{
  struct SoundLogger_Info_o *log; // x0

  log = this->fields.log;
  if ( !log )
    sub_1B64324(0LL);
  return (System_String_o *)((__int64 (__fastcall *)(struct SoundLogger_Info_o *, void *))log->klass->vtable._3_ToString.method)(
                              log,
                              log->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger_BgmVolumeInfo__ToStringSimple(
        SoundLogger_BgmVolumeInfo_o *this,
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
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w3
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  struct System_String_array *buff; // x8
  int32_t v18; // w1
  System_Text_StringBuilder_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FB9C7 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&maxBuff);
    sub_1B640C8(&string___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_937/*"--------"*/, v6);
    byte_49FB9C7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v7 = (struct System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v7;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v9, v10);
  if ( maxBuff >= 1 )
  {
    v15 = 0LL;
    v16 = 32LL;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_1B64324(v11);
      if ( v15 >= buff->max_length )
        sub_1B6432C(v11, v12);
      v18 = StringLiteral_937/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v16) = (Il2CppClass *)StringLiteral_937/*"--------"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)buff + v16), v18, v13, v14);
      ++v15;
      v16 += 8LL;
    }
    while ( maxBuff != v15 );
  }
  this->fields.currentIndex = -1;
  v19 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v12, v13);
  System_Text_StringBuilder___ctor(v19, 0LL);
  this->fields.sb = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sb, (int32_t)v19, v20, v21);
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
  __int64 v11; // x1
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v13; // w9

  if ( (byte_49FB9C8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_43/*"\n"*/, method);
    sub_1B640C8(&StringLiteral_117/*" "*/, v3);
    sub_1B640C8(&StringLiteral_937/*"--------"*/, v4);
    sub_1B640C8(&StringLiteral_1863/*">"*/, v5);
    byte_49FB9C8 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_937/*"--------"*/;
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
      v10 = v9 == currentIndex ? (System_String_o **)&StringLiteral_1863/*">"*/ : (System_String_o **)&StringLiteral_117/*" "*/;
      sb = System_Text_StringBuilder__Append_60536548(sb, *v10, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v13 = (maxNum & (v9 >> 31)) + v9;
      if ( v13 >= buff->max_length )
        sub_1B6432C(sb, v11);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_60536548(sb, buff->m_Items[v13], 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_60536548(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v9 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_1B64324(sb);
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
    sub_1B64324(this);
  if ( v5 >= buff->max_length )
    sub_1B6432C(this, name);
  v6 = &buff->obj.klass + v5;
  v6[4] = (Il2CppClass *)name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 4), (int32_t)name, (int32_t)method, v3);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19

  v2 = this;
  if ( (byte_49FB9C9 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_1B640C8(&SoundLogger_TypeInfo, method);
    byte_49FB9C9 = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= buff->max_length )
    sub_1B6432C(this, method);
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_11:
    sub_1B64324(this);
  return System_String__LastIndexOf_61408728(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}