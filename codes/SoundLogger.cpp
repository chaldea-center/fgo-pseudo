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

  if ( (byte_40F9CAA & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_1254, v8);
    byte_40F9CAA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundLogger_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1254;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1254;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  SoundLogger_Info_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  SoundLogger_Info_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  SoundLogger_Info_o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40F9CA2 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_Info_TypeInfo, method);
    byte_40F9CA2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (SoundLogger_Info_o *)sub_B170CC(SoundLogger_Info_TypeInfo, v3, v4, v5, v6);
  SoundLogger_Info___ctor(v7, 2, 0LL);
  this->fields.bgmLog = v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v18 = (SoundLogger_Info_o *)sub_B170CC(SoundLogger_Info_TypeInfo, v14, v15, v16, v17);
  SoundLogger_Info___ctor(v18, 5, 0LL);
  this->fields.voiceLog = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceLog,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (SoundLogger_Info_o *)sub_B170CC(SoundLogger_Info_TypeInfo, v25, v26, v27, v28);
  SoundLogger_Info___ctor(v29, 16, 0LL);
  this->fields.seLog = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seLog,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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

  if ( (byte_40F9CA3 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, info);
    sub_B16FFC(&StringLiteral_1, v10);
    sub_B16FFC(&StringLiteral_23517, v11);
    byte_40F9CA3 = 1;
  }
  v12 = (System_String_o *)StringLiteral_23517;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1;
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
  v15 = System_String__Format_43744796(v12, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_B170D4();
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

  if ( (byte_40F9CA4 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, cueName);
    byte_40F9CA4 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B170D4();
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

  if ( (byte_40F9CA6 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, cueName);
    byte_40F9CA6 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B170D4();
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

  if ( (byte_40F9CA5 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, cueName);
    byte_40F9CA5 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B170D4();
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v10);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  struct SoundLogger_Info_o *bgmLog; // x0

  if ( (byte_40F9CA7 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, v1);
    byte_40F9CA7 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (bgmLog = Instance->fields.bgmLog) == 0LL )
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(struct SoundLogger_Info_o *, void *))bgmLog->klass->vtable._3_ToString.method)(
                              bgmLog,
                              bgmLog->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  struct SoundLogger_Info_o *seLog; // x0

  if ( (byte_40F9CA9 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, v1);
    byte_40F9CA9 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (seLog = Instance->fields.seLog) == 0LL )
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(struct SoundLogger_Info_o *, void *))seLog->klass->vtable._3_ToString.method)(
                              seLog,
                              seLog->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  struct SoundLogger_Info_o *voiceLog; // x0

  if ( (byte_40F9CA8 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, v1);
    byte_40F9CA8 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (voiceLog = Instance->fields.voiceLog) == 0LL )
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(struct SoundLogger_Info_o *, void *))voiceLog->klass->vtable._3_ToString.method)(
                              voiceLog,
                              voiceLog->klass[1]._1.image);
}


SoundLogger_o *__fastcall SoundLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  SoundLogger_c *v5; // x0
  SoundLogger_o *v6; // x19
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  SoundLogger_c *v14; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_40F9CA1 & 1) == 0 )
  {
    sub_B16FFC(&SoundLogger_TypeInfo, v1);
    byte_40F9CA1 = 1;
  }
  v5 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v5 = SoundLogger_TypeInfo;
  }
  if ( !v5->static_fields->instance )
  {
    v6 = (SoundLogger_o *)sub_B170CC(v5, v1, v2, v3, v4);
    SoundLogger___ctor(v6, v7);
    v14 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v14 = SoundLogger_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->instance = v6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->instance,
      (System_Int32_array **)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v5 = SoundLogger_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = SoundLogger_TypeInfo;
  }
  return v5->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_B170D4();
  return SoundLogger_Info__checkPlayLogLatest(info, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_array *v8; // x0
  SoundLogger_Info_Fields *p_fields; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  unsigned __int64 v23; // x22
  __int64 v24; // x23
  unsigned int *buff; // x25
  __int64 v26; // x0
  System_Int32_array **v27; // x1
  System_Text_StringBuilder_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F7A1F & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&maxBuff);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_762, v6);
    byte_40F7A1F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v8 = (struct System_String_array *)sub_B17014(string___TypeInfo, (unsigned int)maxBuff, v7);
  p_fields = &this->fields;
  this->fields.buff = v8;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  if ( maxBuff >= 1 )
  {
    v23 = 0LL;
    v24 = 8LL;
    do
    {
      buff = (unsigned int *)p_fields->buff;
      if ( !p_fields->buff )
        sub_B170D4();
      v26 = StringLiteral_762;
      if ( StringLiteral_762 )
      {
        v26 = sub_B170BC(StringLiteral_762, *(_QWORD *)(*(_QWORD *)buff + 64LL));
        if ( !v26 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        v27 = (System_Int32_array **)StringLiteral_762;
      }
      else
      {
        v27 = 0LL;
      }
      if ( v23 >= buff[6] )
      {
        sub_B17100(v26, v27, v17);
        sub_B170A0();
      }
      *(_QWORD *)&buff[v24] = v27;
      sub_B16F98((BattleServantConfConponent_o *)&buff[v24], v27, v17, v18, v19, v20, v21, v22);
      ++v23;
      v24 += 2LL;
    }
    while ( (__int64)v23 < maxBuff );
  }
  this->fields.currentIndex = -1;
  v28 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v16, v17, v18, v19);
  System_Text_StringBuilder___ctor(v28, 0LL);
  this->fields.sb = v28;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.sb, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
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
  System_Text_StringBuilder_o *v10; // x0
  int32_t v11; // w24
  System_String_o **v12; // x8
  System_Text_StringBuilder_o *appended; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_String_array *buff; // x8
  System_Text_StringBuilder_o *v17; // x0
  System_Text_StringBuilder_o *v18; // x0
  struct System_Text_StringBuilder_o *v19; // x0

  if ( (byte_40F7A20 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_26, method);
    sub_B16FFC(&StringLiteral_80, v3);
    sub_B16FFC(&StringLiteral_762, v4);
    sub_B16FFC(&StringLiteral_1512, v5);
    byte_40F7A20 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_762;
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
      v10 = this->fields.sb;
      v11 = v9 < 0 ? maxNum : 0;
      if ( !v10 )
        break;
      v12 = (System_String_o **)(v9 == currentIndex ? &StringLiteral_1512 : &StringLiteral_80);
      appended = System_Text_StringBuilder__Append_41914240(v10, *v12, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      if ( v11 + v9 >= buff->max_length )
      {
        sub_B17100(appended, v14, v15);
        sub_B170A0();
      }
      v17 = this->fields.sb;
      if ( !v17 )
        break;
      System_Text_StringBuilder__Append_41914240(v17, *(&buff->m_Items[v11] + v9), 0LL);
      v18 = this->fields.sb;
      if ( !v18 )
        break;
      System_Text_StringBuilder__Append_41914240(v18, (System_String_o *)StringLiteral_26, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v9 <= currentIndex - maxNum )
        goto LABEL_19;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_19:
  v19 = this->fields.sb;
  if ( !v19 )
    goto LABEL_22;
  return (System_String_o *)((__int64 (__fastcall *)(struct System_Text_StringBuilder_o *, Il2CppMethodPointer))v19->klass->vtable._3_ToString.method)(
                              v19,
                              v19->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall SoundLogger_Info__add(SoundLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_array *buff; // x20
  int v9; // w21
  Il2CppClass **v11; // x0

  buff = this->fields.buff;
  v9 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v9;
  if ( !buff )
    sub_B170D4();
  if ( name )
  {
    this = (SoundLogger_Info_o *)sub_B170BC(name, buff->obj.klass->_1.element_class);
    if ( !this )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( v9 >= buff->max_length )
  {
    sub_B17100(this, name, method);
    sub_B170A0();
  }
  v11 = &buff->obj.klass + v9;
  v11[4] = (Il2CppClass *)name;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 4),
    (System_Int32_array **)name,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SoundLogger_Info_o *v3; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v6; // x19

  v3 = this;
  if ( (byte_40F7A21 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_B16FFC(&SoundLogger_TypeInfo, method);
    byte_40F7A21 = 1;
  }
  currentIndex = v3->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v3->fields.buff;
  if ( !buff )
    goto LABEL_12;
  if ( (unsigned int)currentIndex >= buff->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v6 = buff->m_Items[currentIndex];
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v6 )
LABEL_12:
    sub_B170D4();
  return System_String__LastIndexOf_43817692(v6, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}