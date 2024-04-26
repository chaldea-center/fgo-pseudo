void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4350A92 & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    sub_B70694(&StringLiteral_1281/*":NG"*/);
    byte_4350A92 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundLogger_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_1281/*":NG"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1281/*":NG"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  SoundLogger_Info_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  SoundLogger_Info_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4350A8A & 1) == 0 )
  {
    sub_B70694(&SoundLogger_Info_TypeInfo);
    byte_4350A8A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (SoundLogger_Info_o *)sub_B70764(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v3, 2, 0LL);
  this->fields.bgmLog = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (SoundLogger_Info_o *)sub_B70764(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v10, 5, 0LL);
  this->fields.voiceLog = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.voiceLog,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (SoundLogger_Info_o *)sub_B70764(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v17, 16, 0LL);
  this->fields.seLog = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.seLog,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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

  if ( (byte_4350A8B & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_23995/*"{0}/{1} {2}"*/);
    byte_4350A8B = 1;
  }
  v10 = (System_String_o *)StringLiteral_23995/*"{0}/{1} {2}"*/;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1/*""*/;
  }
  else
  {
    v12 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v12 = SoundLogger_TypeInfo;
    }
    static_fields = (Il2CppObject **)v12->static_fields;
  }
  v13 = System_String__Format_44759232(v10, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_B7076C(v13, v14);
  SoundLogger_Info__add(info, v13, 0LL);
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

  if ( (byte_4350A8C & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    byte_4350A8C = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B7076C(v9, v10);
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

  if ( (byte_4350A8E & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    byte_4350A8E = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B7076C(v9, v10);
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

  if ( (byte_4350A8D & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    byte_4350A8D = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B7076C(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4350A8F & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    byte_4350A8F = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_B7076C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4350A91 & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    byte_4350A91 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_B7076C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4350A90 & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    byte_4350A90 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_B7076C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


SoundLogger_o *__fastcall SoundLogger__get_Instance(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *v2; // x19
  const MethodInfo *v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  SoundLogger_c *v10; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_4350A89 & 1) == 0 )
  {
    sub_B70694(&SoundLogger_TypeInfo);
    byte_4350A89 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v1 = SoundLogger_TypeInfo;
  }
  if ( !v1->static_fields->instance )
  {
    v2 = (SoundLogger_o *)sub_B70764(v1);
    SoundLogger___ctor(v2, v3);
    v10 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v10 = SoundLogger_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->instance = v2;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->instance,
      (System_Int32_array **)v2,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    v1 = SoundLogger_TypeInfo;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = SoundLogger_TypeInfo;
  }
  return v1->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_B7076C(this, 0LL);
  return SoundLogger_Info__checkPlayLogLatest(info, 0LL);
}


void __fastcall SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  struct System_String_array *v5; // x0
  SoundLogger_Info_Fields *p_fields; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  unsigned __int64 v21; // x22
  __int64 v22; // x23
  unsigned int *buff; // x25
  __int64 v24; // x0
  System_Int32_array **v25; // x1
  System_Text_StringBuilder_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_434F8B6 & 1) == 0 )
  {
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_777/*"--------"*/);
    byte_434F8B6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v5 = (struct System_String_array *)sub_B706AC(string___TypeInfo, (unsigned int)maxBuff);
  p_fields = &this->fields;
  this->fields.buff = v5;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  if ( maxBuff >= 1 )
  {
    v21 = 0LL;
    v22 = 8LL;
    do
    {
      buff = (unsigned int *)p_fields->buff;
      if ( !p_fields->buff )
        sub_B7076C(v13, v14);
      v24 = StringLiteral_777/*"--------"*/;
      if ( StringLiteral_777/*"--------"*/ )
      {
        v24 = sub_B70754(StringLiteral_777/*"--------"*/, *(_QWORD *)(*(_QWORD *)buff + 64LL));
        if ( !v24 )
        {
          v34 = sub_B7078C();
          sub_B70738(v34, 0LL);
        }
        v25 = (System_Int32_array **)StringLiteral_777/*"--------"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v21 >= buff[6] )
      {
        v33 = sub_B70798(v24);
        sub_B70738(v33, 0LL);
      }
      *(_QWORD *)&buff[v22] = v25;
      sub_B70630((BattleServantConfConponent_o *)&buff[v22], v25, v15, v16, v17, v18, v19, v20);
      ++v21;
      v22 += 2LL;
    }
    while ( (__int64)v21 < maxBuff );
  }
  this->fields.currentIndex = -1;
  v26 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v26, 0LL);
  this->fields.sb = v26;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.sb, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
}


System_String_o *__fastcall SoundLogger_Info__ToString(SoundLogger_Info_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w9
  int32_t v6; // w23
  int32_t v7; // w24
  System_String_o **v8; // x8
  struct System_String_array *buff; // x8
  __int64 v11; // x0

  if ( (byte_434F8B7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_777/*"--------"*/);
    sub_B70694(&StringLiteral_1540/*">"*/);
    byte_434F8B7 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_777/*"--------"*/;
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_22;
  System_Text_StringBuilder__set_Length(sb, 0, 0LL);
  currentIndex = this->fields.currentIndex;
  maxNum = this->fields.maxNum;
  if ( currentIndex > currentIndex - maxNum )
  {
    v6 = this->fields.currentIndex;
    while ( 1 )
    {
      sb = this->fields.sb;
      v7 = v6 < 0 ? maxNum : 0;
      if ( !sb )
        break;
      v8 = (System_String_o **)(v6 == currentIndex ? &StringLiteral_1540/*">"*/ : &StringLiteral_82/*" "*/);
      sb = System_Text_StringBuilder__Append_42601980(sb, *v8, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      if ( v7 + v6 >= buff->max_length )
      {
        v11 = sub_B70798(sb);
        sub_B70738(v11, 0LL);
      }
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42601980(sb, *(&buff->m_Items[v7] + v6), 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42601980(sb, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v6 <= currentIndex - maxNum )
        goto LABEL_19;
    }
LABEL_22:
    sub_B7076C(sb, method);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_array *buff; // x20
  int v9; // w21
  Il2CppClass **v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0

  buff = this->fields.buff;
  v9 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v9;
  if ( !buff )
    sub_B7076C(this, name);
  if ( name )
  {
    this = (SoundLogger_Info_o *)sub_B70754(name, buff->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_B7078C();
      sub_B70738(v13, 0LL);
    }
  }
  if ( v9 >= buff->max_length )
  {
    v12 = sub_B70798(this);
    sub_B70738(v12, 0LL);
  }
  v11 = &buff->obj.klass + v9;
  v11[4] = (Il2CppClass *)name;
  sub_B70630(
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
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19
  __int64 v7; // x0

  v2 = this;
  if ( (byte_434F8B8 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_B70694(&SoundLogger_TypeInfo);
    byte_434F8B8 = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_12;
  if ( (unsigned int)currentIndex >= buff->max_length )
  {
    v7 = sub_B70798(this);
    sub_B70738(v7, 0LL);
  }
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_12:
    sub_B7076C(this, method);
  return System_String__LastIndexOf_44832128(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}