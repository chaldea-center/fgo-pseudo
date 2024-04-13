void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E791B & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1276/*":NG"*/, v8, v9, v10);
    byte_42E791B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundLogger_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_1276/*":NG"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1276/*":NG"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundLogger___ctor(SoundLogger_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SoundLogger_Info_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  SoundLogger_Info_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  SoundLogger_Info_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E7913 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_Info_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7913 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (SoundLogger_Info_o *)sub_B5D694(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v5, 2, 0LL);
  this->fields.bgmLog = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  v12 = (SoundLogger_Info_o *)sub_B5D694(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v12, 5, 0LL);
  this->fields.voiceLog = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceLog,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (SoundLogger_Info_o *)sub_B5D694(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v19, 16, 0LL);
  this->fields.seLog = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seLog,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall SoundLogger__addLog(
        SoundLogger_o *this,
        SoundLogger_Info_o *info,
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool isValid,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_String_o *v16; // x22
  Il2CppObject **static_fields; // x8
  SoundLogger_c *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1

  if ( (byte_42E7914 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, (_DWORD)info, (_DWORD)cueSheet, cueName);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23923/*"{0}/{1} {2}"*/, v13, v14, v15);
    byte_42E7914 = 1;
  }
  v16 = (System_String_o *)StringLiteral_23923/*"{0}/{1} {2}"*/;
  if ( isValid )
  {
    static_fields = (Il2CppObject **)&StringLiteral_1/*""*/;
  }
  else
  {
    v18 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v18 = SoundLogger_TypeInfo;
    }
    static_fields = (Il2CppObject **)v18->static_fields;
  }
  v19 = System_String__Format_44578852(v16, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_B5D69C(v19, v20);
  SoundLogger_Info__add(info, v19, 0LL);
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

  if ( (byte_42E7915 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, (_DWORD)cueName, isValid, method);
    byte_42E7915 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B5D69C(v9, v10);
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

  if ( (byte_42E7917 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, (_DWORD)cueName, isValid, method);
    byte_42E7917 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B5D69C(v9, v10);
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

  if ( (byte_42E7916 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, (_DWORD)cueName, isValid, method);
    byte_42E7916 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_B5D69C(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SoundLogger_c *v4; // x0
  SoundLogger_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7918 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, v1, v2, v3);
    byte_42E7918 = 1;
  }
  v4 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v4);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_B5D69C(Instance, v6);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogSe(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SoundLogger_o *Instance; // x0
  __int64 v5; // x1
  SoundLogger_c *v7; // x0

  if ( (byte_42E791A & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, v1, v2, v3);
    byte_42E791A = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_B5D69C(Instance, v5);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


System_String_o *__fastcall SoundLogger__getLogVoice(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SoundLogger_c *v4; // x0
  SoundLogger_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7919 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, v1, v2, v3);
    byte_42E7919 = 1;
  }
  v4 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v4);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_B5D69C(Instance, v6);
  return (System_String_o *)((__int64 (__fastcall *)(SoundLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


SoundLogger_o *__fastcall SoundLogger__get_Instance(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SoundLogger_c *v4; // x0
  SoundLogger_o *v5; // x19
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  SoundLogger_c *v13; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_42E7912 & 1) == 0 )
  {
    sub_B5D5C4(&SoundLogger_TypeInfo, v1, v2, v3);
    byte_42E7912 = 1;
  }
  v4 = SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v4 = SoundLogger_TypeInfo;
  }
  if ( !v4->static_fields->instance )
  {
    v5 = (SoundLogger_o *)sub_B5D694(v4);
    SoundLogger___ctor(v5, v6);
    v13 = SoundLogger_TypeInfo;
    if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v13 = SoundLogger_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->instance = v5;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->instance,
      (System_Int32_array **)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v4 = SoundLogger_TypeInfo;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = SoundLogger_TypeInfo;
  }
  return v4->static_fields->instance;
}


bool __fastcall SoundLogger__isValidLatest(SoundLogger_o *this, SoundLogger_Info_o *info, const MethodInfo *method)
{
  if ( !info )
    sub_B5D69C(this, 0LL);
  return SoundLogger_Info__checkPlayLogLatest(info, 0LL);
}


void __fastcall SoundLogger_Info___ctor(SoundLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SoundLogger_Info_Fields *p_fields; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  unsigned __int64 v15; // x22
  __int64 v16; // x23
  unsigned int *buff; // x25
  __int64 v18; // x0
  __int64 v19; // x1
  System_Text_StringBuilder_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_42E63FF & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, maxBuff, (_DWORD)method, v3);
    sub_B5D5C4(&string___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_772/*"--------"*/, v9, v10, v11);
    byte_42E63FF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  p_fields = &this->fields;
  this->fields.buff = (struct System_String_array *)sub_B5D5DC(string___TypeInfo, (unsigned int)maxBuff);
  sub_B5D560(&this->fields);
  if ( maxBuff >= 1 )
  {
    v15 = 0LL;
    v16 = 8LL;
    do
    {
      buff = (unsigned int *)p_fields->buff;
      if ( !p_fields->buff )
        sub_B5D69C(v13, v14);
      v18 = StringLiteral_772/*"--------"*/;
      if ( StringLiteral_772/*"--------"*/ )
      {
        v18 = sub_B5D684(StringLiteral_772/*"--------"*/, *(_QWORD *)(*(_QWORD *)buff + 64LL));
        if ( !v18 )
        {
          v22 = sub_B5D6BC();
          sub_B5D668(v22, 0LL);
        }
        v19 = StringLiteral_772/*"--------"*/;
      }
      else
      {
        v19 = 0LL;
      }
      if ( v15 >= buff[6] )
      {
        v21 = sub_B5D6C8(v18);
        sub_B5D668(v21, 0LL);
      }
      *(_QWORD *)&buff[v16] = v19;
      sub_B5D560(&buff[v16]);
      ++v15;
      v16 += 2LL;
    }
    while ( (__int64)v15 < maxBuff );
  }
  this->fields.currentIndex = -1;
  v20 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v20, 0LL);
  this->fields.sb = v20;
  sub_B5D560(&this->fields.sb);
}


System_String_o *__fastcall SoundLogger_Info__ToString(SoundLogger_Info_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w9
  int32_t v17; // w23
  int32_t v18; // w24
  System_String_o **v19; // x8
  struct System_String_array *buff; // x8
  __int64 v22; // x0

  if ( (byte_42E6400 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_772/*"--------"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1535/*">"*/, v11, v12, v13);
    byte_42E6400 = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_772/*"--------"*/;
  sb = this->fields.sb;
  if ( !sb )
    goto LABEL_22;
  System_Text_StringBuilder__set_Length(sb, 0, 0LL);
  currentIndex = this->fields.currentIndex;
  maxNum = this->fields.maxNum;
  if ( currentIndex > currentIndex - maxNum )
  {
    v17 = this->fields.currentIndex;
    while ( 1 )
    {
      sb = this->fields.sb;
      v18 = v17 < 0 ? maxNum : 0;
      if ( !sb )
        break;
      v19 = (System_String_o **)(v17 == currentIndex ? &StringLiteral_1535/*">"*/ : &StringLiteral_81/*" "*/);
      sb = System_Text_StringBuilder__Append_42953744(sb, *v19, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      if ( v18 + v17 >= buff->max_length )
      {
        v22 = sub_B5D6C8(sb);
        sub_B5D668(v22, 0LL);
      }
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42953744(sb, *(&buff->m_Items[v18] + v17), 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_42953744(sb, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v17 <= currentIndex - maxNum )
        goto LABEL_19;
    }
LABEL_22:
    sub_B5D69C(sb, method);
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
    sub_B5D69C(this, name);
  if ( name )
  {
    this = (SoundLogger_Info_o *)sub_B5D684(name, buff->obj.klass->_1.element_class);
    if ( !this )
    {
      v8 = sub_B5D6BC();
      sub_B5D668(v8, 0LL);
    }
  }
  if ( v4 >= buff->max_length )
  {
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
  }
  v6 = &buff->obj.klass + v4;
  v6[4] = (Il2CppClass *)name;
  sub_B5D560(v6 + 4);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SoundLogger_Info_o *v4; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v7; // x19
  __int64 v9; // x0

  v4 = this;
  if ( (byte_42E6401 & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_B5D5C4(&SoundLogger_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6401 = 1;
  }
  currentIndex = v4->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v4->fields.buff;
  if ( !buff )
    goto LABEL_12;
  if ( (unsigned int)currentIndex >= buff->max_length )
  {
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
  }
  v7 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( (BYTE3(SoundLogger_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v7 )
LABEL_12:
    sub_B5D69C(this, method);
  return System_String__LastIndexOf_44651748(v7, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}