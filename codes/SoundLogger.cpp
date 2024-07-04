void __fastcall SoundLogger___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_48E1DE8 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_1571/*":NG"*/, v4);
    byte_48E1DE8 = 1;
  }
  SoundLogger_TypeInfo->static_fields->WORD_NG = (struct System_String_o *)StringLiteral_1571/*":NG"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)SoundLogger_TypeInfo->static_fields, StringLiteral_1571/*":NG"*/, v2, v3);
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

  if ( (byte_48E1DE0 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_Info_TypeInfo, method);
    byte_48E1DE0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (SoundLogger_Info_o *)sub_1B00F18(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v3, 2, v4);
  this->fields.bgmLog = v3;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v5, v6);
  v7 = (SoundLogger_Info_o *)sub_1B00F18(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v7, 5, v8);
  this->fields.voiceLog = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.voiceLog, (int32_t)v7, v9, v10);
  v11 = (SoundLogger_Info_o *)sub_1B00F18(SoundLogger_Info_TypeInfo);
  SoundLogger_Info___ctor(v11, 16, v12);
  this->fields.seLog = v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.seLog, (int32_t)v11, v13, v14);
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

  if ( (byte_48E1DE1 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, info);
    sub_1B00CCC(&StringLiteral_1/*""*/, v10);
    sub_1B00CCC(&StringLiteral_24690/*"{0}/{1} {2}"*/, v11);
    byte_48E1DE1 = 1;
  }
  v12 = (System_String_o *)StringLiteral_24690/*"{0}/{1} {2}"*/;
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
  v15 = System_String__Format_60340188(v12, (Il2CppObject *)cueSheet, (Il2CppObject *)cueName, *static_fields, 0LL);
  if ( !info )
    sub_1B00F28(v15, v16);
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

  if ( (byte_48E1DE2 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, cueName);
    byte_48E1DE2 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B00F28(v9, v10);
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

  if ( (byte_48E1DE4 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, cueName);
    byte_48E1DE4 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B00F28(v9, v10);
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

  if ( (byte_48E1DE3 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, cueName);
    byte_48E1DE3 = 1;
  }
  v7 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v7);
  v9 = SoundLogger__get_Instance((const MethodInfo *)Instance);
  if ( !v9 || !Instance )
    sub_1B00F28(v9, v10);
  SoundLogger__addLog(v9, v9->fields.voiceLog, cueSheet, cueName, isValid, v11);
}


System_String_o *__fastcall SoundLogger__getLogBgm(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundLogger_c *v2; // x0
  SoundLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48E1DE5 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, v1);
    byte_48E1DE5 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.bgmLog) == 0LL )
    sub_1B00F28(Instance, v4);
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

  if ( (byte_48E1DE7 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, v1);
    byte_48E1DE7 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.seLog) == 0LL )
    sub_1B00F28(Instance, v4);
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

  if ( (byte_48E1DE6 & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, v1);
    byte_48E1DE6 = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  Instance = SoundLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (SoundLogger_o *)Instance->fields.voiceLog) == 0LL )
    sub_1B00F28(Instance, v4);
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
  int32_t v6; // w3
  SoundLogger_c *v7; // x0
  struct SoundLogger_StaticFields *static_fields; // x0

  if ( (byte_48E1DDF & 1) == 0 )
  {
    sub_1B00CCC(&SoundLogger_TypeInfo, v1);
    byte_48E1DDF = 1;
  }
  v2 = SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
    v2 = SoundLogger_TypeInfo;
  }
  if ( !v2->static_fields->instance )
  {
    v3 = (SoundLogger_o *)sub_1B00F18(v2);
    SoundLogger___ctor(v3, v4);
    v7 = SoundLogger_TypeInfo;
    if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
      v7 = SoundLogger_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->instance = v3;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->instance, (int32_t)v3, v5, v6);
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
    sub_1B00F28(this, 0LL);
  return SoundLogger_Info__checkPlayLogLatest(info, (const MethodInfo *)info);
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
  int32_t v13; // w2
  int32_t v14; // w3
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  struct System_String_array *buff; // x8
  int32_t v18; // w1
  System_Text_StringBuilder_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_48E1DE9 & 1) == 0 )
  {
    sub_1B00CCC(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&maxBuff);
    sub_1B00CCC(&string___TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_933/*"--------"*/, v6);
    byte_48E1DE9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v7 = (struct System_String_array *)sub_1B00D74(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v7;
  p_fields = &this->fields;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v9, v10);
  if ( maxBuff >= 1 )
  {
    v15 = 0LL;
    v16 = 32LL;
    do
    {
      buff = p_fields->buff;
      if ( !p_fields->buff )
        sub_1B00F28(v11, v12);
      if ( v15 >= buff->max_length )
        sub_1B00F30(v11, v12);
      v18 = StringLiteral_933/*"--------"*/;
      *(Il2CppClass **)((char *)&buff->obj.klass + v16) = (Il2CppClass *)StringLiteral_933/*"--------"*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)((char *)buff + v16), v18, v13, v14);
      ++v15;
      v16 += 8LL;
    }
    while ( maxBuff != v15 );
  }
  this->fields.currentIndex = -1;
  v19 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  this->fields.sb = v19;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.sb, (int32_t)v19, v20, v21);
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
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v12; // w9

  if ( (byte_48E1DEA & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_43/*"\n"*/, method);
    sub_1B00CCC(&StringLiteral_115/*" "*/, v3);
    sub_1B00CCC(&StringLiteral_933/*"--------"*/, v4);
    sub_1B00CCC(&StringLiteral_1857/*">"*/, v5);
    byte_48E1DEA = 1;
  }
  if ( this->fields.currentIndex == -1 )
    return (System_String_o *)StringLiteral_933/*"--------"*/;
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
      v10 = v9 == currentIndex ? (System_String_o **)&StringLiteral_1857/*">"*/ : (System_String_o **)&StringLiteral_115/*" "*/;
      sb = System_Text_StringBuilder__Append_59487644(sb, *v10, 0LL);
      buff = this->fields.buff;
      if ( !buff )
        break;
      v12 = (maxNum & (v9 >> 31)) + v9;
      if ( v12 >= buff->max_length )
        sub_1B00F30(sb, method);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_59487644(sb, buff->m_Items[v12], 0LL);
      sb = this->fields.sb;
      if ( !sb )
        break;
      System_Text_StringBuilder__Append_59487644(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      currentIndex = this->fields.currentIndex;
      maxNum = this->fields.maxNum;
      if ( --v9 <= currentIndex - maxNum )
        goto LABEL_16;
    }
LABEL_19:
    sub_1B00F28(sb, method);
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
    sub_1B00F28(this, name);
  if ( v5 >= buff->max_length )
    sub_1B00F30(this, name);
  v6 = &buff->obj.klass + v5;
  v6[4] = (Il2CppClass *)name;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v6 + 4), (int32_t)name, (int32_t)method, v3);
}


bool __fastcall SoundLogger_Info__checkPlayLogLatest(SoundLogger_Info_o *this, const MethodInfo *method)
{
  SoundLogger_Info_o *v2; // x19
  __int64 currentIndex; // x8
  struct System_String_array *buff; // x9
  System_String_o *v5; // x19

  v2 = this;
  if ( (byte_48E1DEB & 1) == 0 )
  {
    this = (SoundLogger_Info_o *)sub_1B00CCC(&SoundLogger_TypeInfo, method);
    byte_48E1DEB = 1;
  }
  currentIndex = v2->fields.currentIndex;
  if ( (_DWORD)currentIndex == -1 )
    return 0;
  buff = v2->fields.buff;
  if ( !buff )
    goto LABEL_11;
  if ( (unsigned int)currentIndex >= buff->max_length )
    sub_1B00F30(this, method);
  v5 = buff->m_Items[currentIndex];
  this = (SoundLogger_Info_o *)SoundLogger_TypeInfo;
  if ( !SoundLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundLogger_TypeInfo);
  if ( !v5 )
LABEL_11:
    sub_1B00F28(this, method);
  return System_String__LastIndexOf_60358948(v5, SoundLogger_TypeInfo->static_fields->WORD_NG, 0LL) == -1;
}