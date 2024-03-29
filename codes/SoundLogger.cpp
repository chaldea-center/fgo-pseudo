void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4214AAF & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_1263/*":NG"*/, v8);
    byte_4214AAF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundLogger_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1263/*":NG"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1263/*":NG"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  SoundLogger_Info_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  SoundLogger_Info_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  SoundLogger_Info_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4214AA7 & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_Info_TypeInfo, method);
    byte_4214AA7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (SoundLogger_Info_o *)sub_B0D974(SoundLogger_Info_TypeInfo, v3, v4);
  SoundLogger_Info___ctor(v5, 2, 0LL);
  this->fields.bgmLog = v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  v14 = (SoundLogger_Info_o *)sub_B0D974(SoundLogger_Info_TypeInfo, v12, v13);
  SoundLogger_Info___ctor(v14, 5, 0LL);
  this->fields.voiceLog = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voiceLog,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (SoundLogger_Info_o *)sub_B0D974(SoundLogger_Info_TypeInfo, v21, v22);
  SoundLogger_Info___ctor(v23, 16, 0LL);
  this->fields.seLog = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seLog,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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

  if ( (byte_4214AA8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, info);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_23689/*"{0}/{1} {2}"*/, v11);
    byte_4214AA8 = 1;
  }
  v12 = (System_String_o *)StringLiteral_23689/*"{0}/{1} {2}"*/;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1/*""*/;
  }
  else
  {
    v14 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v14 = SoundLogger_TypeInfo;
    }
    static_fields = (Il2CppObject **)v14->static_fields;
  }
  v15 = System_String__Format_43850968(v12, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_B0D97C(v15);
  SoundLogger_Info__add(info, v15, 0LL);
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

  if ( (byte_4214AA9 & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, cueName);
    byte_4214AA9 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B0D97C(v9);
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

  if ( (byte_4214AAB & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, cueName);
    byte_4214AAB = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B0D97C(v9);
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

  if ( (byte_4214AAA & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, cueName);
    byte_4214AAA = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B0D97C(v9);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v10);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0

  if ( (byte_4214AAC & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, v1);
    byte_4214AAC = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_B0D97C(Instance);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0

  if ( (byte_4214AAE & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, v1);
    byte_4214AAE = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_B0D97C(Instance);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0

  if ( (byte_4214AAD & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, v1);
    byte_4214AAD = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_B0D97C(Instance);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  SoundLogger_c *v12; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_4214AA6 & 1) == 0 )
  {
    sub_B0D8A4(&SoundLogger_TypeInfo, v1);
    byte_4214AA6 = 1;
  }
  v3 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v3 = SoundLogger_TypeInfo;
  }
  if ( !v3->static_fields->instance )
  {
    v4 = (SoundLogger_o *)sub_B0D974(v3, v1, v2);
    SoundLogger___ctor(v4, v5);
    v12 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v12 = SoundLogger_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->instance = v4;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->instance,
      (System_Int32_array **)v4,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v3 = SoundLogger_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = SoundLogger_TypeInfo;
  }
  return v3->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_B0D97C(this);
  return SoundLogger_Info__checkPlayLogLatest(info, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_String_array *v7; // x0
  SoundLogger_Info_Fields *p_fields; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  unsigned __int64 v12; // x22
  __int64 v13; // x23
  unsigned int *buff; // x25
  __int64 v15; // x0
  __int64 v16; // x1
  System_Text_StringBuilder_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_42116E5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&maxBuff);
    sub_B0D8A4(&string___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_770/*"--------"*/, v6);
    byte_42116E5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v7 = (struct System_String_array *)sub_B0D8BC(string___TypeInfo, (unsigned int)maxBuff);
  p_fields = &this->fields;
  this->fields.buff = v7;
  sub_B0D840(&this->fields, v7);
  if ( maxBuff >= 1 )
  {
    v12 = 0LL;
    v13 = 8LL;
    do
    {
      buff = (unsigned int *)p_fields->buff;
      if ( !p_fields->buff )
        sub_B0D97C(v9);
      v15 = StringLiteral_770/*"--------"*/;
      if ( StringLiteral_770/*"--------"*/ )
      {
        v15 = sub_B0D964(StringLiteral_770/*"--------"*/, *(_QWORD *)(*(_QWORD *)buff + 64LL));
        if ( !v15 )
        {
          v19 = sub_B0D99C();
          sub_B0D948(v19, 0LL);
        }
        v16 = StringLiteral_770/*"--------"*/;
      }
      else
      {
        v16 = 0LL;
      }
      if ( v12 >= buff[6] )
      {
        v18 = sub_B0D9A8(v15);
        sub_B0D948(v18, 0LL);
      }
      *(_QWORD *)&buff[v13] = v16;
      sub_B0D840(&buff[v13], v16);
      ++v12;
      v13 += 2LL;
    }
    while ( (__int64)v12 < maxBuff );
  }
  this->fields.currentIndex = -1;
  v17 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v10, v11);
  System_Text_StringBuilder___ctor(v17, 0LL);
  this->fields.sb = v17;
  sub_B0D840(&this->fields.sb, v17);
}


System_String_o *__fastcall SoundLogger_Info__ToString(SoundLogger_Info_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w9
  int32_t v9; // w23
  int32_t v10; // w24
  System_String_o **v11; // x8
  struct System_String_array *buff; // x8
  __int64 v14; // x0

  if ( (byte_42116E6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, method);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v3);
    sub_B0D8A4(&StringLiteral_770/*"--------"*/, v4);
    sub_B0D8A4(&StringLiteral_1522/*">"*/, v5);
    byte_42116E6 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_770/*"--------"*/;
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_22;
  System_Text_StringBuilder__set_Length(sb, 0, 0LL);
  currentIndex = this->fields.currentIndex;
  maxNum = this->fields.maxNum;
  if ( currentIndex > currentIndex - maxNum )
  {
    v9 = this->fields.currentIndex;
    while ( 1 )
    {
      sb = this->fields.sb;
      v10 = v9 < 0 ? maxNum : 0;
      if ( !sb )
        break;
      v11 = (System_String_o **)(v9 == currentIndex ? &StringLiteral_1522/*">"*/ : &StringLiteral_80/*" "*/);
      sb = System_Text_StringBuilder__Append_42155400(sb, *v11, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      if ( v10 + v9 >= buff->max_length )
      {
        v14 = sub_B0D9A8(sb);
        sub_B0D948(v14, 0LL);
      }
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42155400(sb, *(&buff->m_Items[v10] + v9), 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42155400(sb, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v9 <= currentIndex - maxNum )
        goto LABEL_19;
    }
LABEL_22:
    sub_B0D97C(sb);
  }
LABEL_19:
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_22;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))sb->klass->vtable._3_ToString.method)(
                              sb,
                              sb->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall SoundLogger_Info__add(SoundLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_String_array *buff; // x20
  int v4; // w21
  Il2CppClass **v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0

  buff = this->fields.buff;
  v4 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v4;
  if ( !buff )
    sub_B0D97C(this);
  if ( name )
  {
    this = (SoundLogger_Info_o *)sub_B0D964(name, buff->obj.klass->_1.element_class);
    if ( !this )
    {
      v8 = sub_B0D99C();
      sub_B0D948(v8, 0LL);
    }
  }
  if ( v4 >= buff->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  v6 = &buff->obj.klass + v4;
  v6[4] = (Il2CppClass *)name;
  sub_B0D840(v6 + 4, name);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19
  __int64 v7; // x0

  v2 = this;
  if ( (byte_42116E7 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_B0D8A4(&SoundLogger_TypeInfo, method);
    byte_42116E7 = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_12;
  if ( (unsigned int)currentIndex >= buff->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_12:
    sub_B0D97C(this);
  return System_String__LastIndexOf_43923864(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}