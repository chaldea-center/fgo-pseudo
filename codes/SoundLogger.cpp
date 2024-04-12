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

  if ( (byte_42AF3F1 & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    sub_B52984(&StringLiteral_1271/*":NG"*/);
    byte_42AF3F1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundLogger_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_1271/*":NG"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1271/*":NG"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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

  if ( (byte_42AF3E9 & 1) == 0 )
  {
    sub_B52984(&SoundLogger_Info_TypeInfo);
    byte_42AF3E9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (SoundLogger_Info_o *)sub_B52A54(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v3, 2, 0LL);
  this->fields.bgmLog = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (SoundLogger_Info_o *)sub_B52A54(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v10, 5, 0LL);
  this->fields.voiceLog = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.voiceLog,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (SoundLogger_Info_o *)sub_B52A54(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v17, 16, 0LL);
  this->fields.seLog = v17;
  sub_B52920(
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

  if ( (byte_42AF3EA & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_23805/*"{0}/{1} {2}"*/);
    byte_42AF3EA = 1;
  }
  v10 = (System_String_o *)StringLiteral_23805/*"{0}/{1} {2}"*/;
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
  v13 = System_String__Format_44569380(v10, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_B52A5C(v13, v14);
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

  if ( (byte_42AF3EB & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    byte_42AF3EB = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B52A5C(v9, v10);
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

  if ( (byte_42AF3ED & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    byte_42AF3ED = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B52A5C(v9, v10);
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

  if ( (byte_42AF3EC & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    byte_42AF3EC = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B52A5C(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AF3EE & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    byte_42AF3EE = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_B52A5C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AF3F0 & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    byte_42AF3F0 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_B52A5C(Instance, v3);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  SoundLogger_c *v1; // x0
  SoundLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AF3EF & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    byte_42AF3EF = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_B52A5C(Instance, v3);
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

  if ( (byte_42AF3E8 & 1) == 0 )
  {
    sub_B52984(&SoundLogger_TypeInfo);
    byte_42AF3E8 = 1;
  }
  v1 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v1 = SoundLogger_TypeInfo;
  }
  if ( !v1->static_fields->instance )
  {
    v2 = (SoundLogger_o *)sub_B52A54(v1);
    SoundLogger___ctor(v2, v3);
    v10 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v10 = SoundLogger_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->instance = v2;
    sub_B52920(
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
    sub_B52A5C(this, 0LL);
  return SoundLogger_Info__checkPlayLogLatest(info, 0LL);
}


void __fastcall SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  SoundLogger_Info_Fields *p_fields; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned __int64 v8; // x22
  __int64 v9; // x23
  unsigned int *buff; // x25
  __int64 v11; // x0
  __int64 v12; // x1
  System_Text_StringBuilder_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_42ADD25 & 1) == 0 )
  {
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_774/*"--------"*/);
    byte_42ADD25 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  p_fields = &this->fields;
  this->fields.buff = (struct System_String_array *)sub_B5299C(string___TypeInfo, (unsigned int)maxBuff);
  sub_B52920(&this->fields);
  if ( maxBuff >= 1 )
  {
    v8 = 0LL;
    v9 = 8LL;
    do
    {
      buff = (unsigned int *)p_fields->buff;
      if ( !p_fields->buff )
        sub_B52A5C(v6, v7);
      v11 = StringLiteral_774/*"--------"*/;
      if ( StringLiteral_774/*"--------"*/ )
      {
        v11 = sub_B52A44(StringLiteral_774/*"--------"*/, *(_QWORD *)(*(_QWORD *)buff + 64LL));
        if ( !v11 )
        {
          v15 = sub_B52A7C();
          sub_B52A28(v15, 0LL);
        }
        v12 = StringLiteral_774/*"--------"*/;
      }
      else
      {
        v12 = 0LL;
      }
      if ( v8 >= buff[6] )
      {
        v14 = sub_B52A88(v11);
        sub_B52A28(v14, 0LL);
      }
      *(_QWORD *)&buff[v9] = v12;
      sub_B52920(&buff[v9]);
      ++v8;
      v9 += 2LL;
    }
    while ( (__int64)v8 < maxBuff );
  }
  this->fields.currentIndex = -1;
  v13 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0LL);
  this->fields.sb = v13;
  sub_B52920(&this->fields.sb);
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

  if ( (byte_42ADD26 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_774/*"--------"*/);
    sub_B52984(&StringLiteral_1530/*">"*/);
    byte_42ADD26 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_774/*"--------"*/;
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
      v8 = (System_String_o **)(v6 == currentIndex ? &StringLiteral_1530/*">"*/ : &StringLiteral_81/*" "*/);
      sb = System_Text_StringBuilder__Append_42994048(sb, *v8, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      if ( v7 + v6 >= buff->max_length )
      {
        v11 = sub_B52A88(sb);
        sub_B52A28(v11, 0LL);
      }
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42994048(sb, *(&buff->m_Items[v7] + v6), 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42994048(sb, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v6 <= currentIndex - maxNum )
        goto LABEL_19;
    }
LABEL_22:
    sub_B52A5C(sb, method);
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
    sub_B52A5C(this, name);
  if ( name )
  {
    this = (SoundLogger_Info_o *)sub_B52A44(name, buff->obj.klass->_1.element_class);
    if ( !this )
    {
      v8 = sub_B52A7C();
      sub_B52A28(v8, 0LL);
    }
  }
  if ( v4 >= buff->max_length )
  {
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  v6 = &buff->obj.klass + v4;
  v6[4] = (Il2CppClass *)name;
  sub_B52920(v6 + 4);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19
  __int64 v7; // x0

  v2 = this;
  if ( (byte_42ADD27 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_B52984(&SoundLogger_TypeInfo);
    byte_42ADD27 = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_12;
  if ( (unsigned int)currentIndex >= buff->max_length )
  {
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_12:
    sub_B52A5C(this, method);
  return System_String__LastIndexOf_44642276(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}