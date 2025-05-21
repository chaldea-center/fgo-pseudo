void __fastcall FadeLogger___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B43EBB & 1) == 0 )
  {
    sub_1BDB878(&FadeLogger_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_887/*"--------"*/, v4);
    byte_4B43EBB = 1;
  }
  FadeLogger_TypeInfo->static_fields->BLANK = (struct System_String_o *)StringLiteral_887/*"--------"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)FadeLogger_TypeInfo->static_fields, StringLiteral_887/*"--------"*/, v2, v3);
}


void __fastcall FadeLogger___ctor(FadeLogger_o *this, const MethodInfo *method)
{
  FadeLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B43EB7 & 1) == 0 )
  {
    sub_1BDB878(&FadeLogger_Info_TypeInfo, method);
    byte_4B43EB7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (FadeLogger_Info_o *)sub_1BDBAC4(FadeLogger_Info_TypeInfo);
  FadeLogger_Info___ctor(v3, 16, v4);
  this->fields.fadeLog = v3;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v5, v6);
}


void __fastcall FadeLogger__AddFadeLog(System_String_o *logText, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  FadeLogger_o *Instance; // x20
  FadeLogger_Info_o *buff; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B43EB9 & 1) == 0 )
  {
    sub_1BDB878(&FadeLogger_TypeInfo, method);
    byte_4B43EB9 = 1;
  }
  v3 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v3);
  buff = (FadeLogger_Info_o *)FadeLogger__get_Instance((const MethodInfo *)Instance);
  if ( !buff || !Instance || (buff = (FadeLogger_Info_o *)buff->fields.buff) == 0LL )
    sub_1BDBAD4(buff, v6);
  FadeLogger_Info__Add(buff, logText, v7);
}


void __fastcall FadeLogger__AddLog(
        FadeLogger_o *this,
        FadeLogger_Info_o *info,
        System_String_o *logText,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BDBAD4(this, 0LL);
  FadeLogger_Info__Add(info, logText, (const MethodInfo *)logText);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall FadeLogger__CreateFadeLogText(
        System_String_o *funkName,
        int32_t fadeKind,
        System_String_o *state,
        float duration,
        UnityEngine_GameObject_o *gameObj,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  System_Object_array *v16; // x19
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x3
  float v20; // s0
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x20
  __int64 v24; // x0
  System_Enum_o v25; // [xsp+0h] [xbp-50h] BYREF
  int32_t v26; // [xsp+10h] [xbp-40h]
  System_String_o format; // [xsp+1Ch] [xbp-34h] BYREF

  *(float *)&format.klass = duration;
  if ( (byte_4B43EB8 & 1) == 0 )
  {
    sub_1BDB878(&MaskFade_Kind_TypeInfo, *(_QWORD *)&fadeKind);
    sub_1BDB878(&object___TypeInfo, v9);
    sub_1BDB878(&StringLiteral_25215/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/, v10);
    sub_1BDB878(&StringLiteral_1146/*"0.00"*/, v11);
    byte_4B43EB8 = 1;
  }
  v12 = (System_String_o *)sub_1BDB920(object___TypeInfo, 4LL);
  if ( !v12 )
    sub_1BDBAD4(0LL, v13);
  v16 = (System_Object_array *)v12;
  if ( funkName )
  {
    v12 = (System_String_o *)sub_1BDB9B4(funkName, v12->klass->_1.element_class);
    if ( !v12 )
      goto LABEL_18;
  }
  if ( !v16->max_length )
    goto LABEL_17;
  v16->m_Items[0] = (Il2CppObject *)funkName;
  sub_1BDB81C((CGThumbnailListItem_o *)v16->m_Items, (int32_t)funkName, v14, v15);
  v25.klass = (System_Enum_c *)MaskFade_Kind_TypeInfo;
  v25.monitor = (void *)-1LL;
  v26 = fadeKind;
  v12 = System_Enum__ToString(&v25, 0LL);
  v18 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_1BDB9B4(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_18;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_17;
  v16->m_Items[1] = v18;
  sub_1BDB81C((CGThumbnailListItem_o *)&v16->m_Items[1], (int32_t)v18, v14, v17);
  if ( state )
  {
    v12 = (System_String_o *)sub_1BDB9B4(state, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_18;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_17;
  v16->m_Items[2] = (Il2CppObject *)state;
  sub_1BDB81C((CGThumbnailListItem_o *)&v16->m_Items[2], (int32_t)state, v14, v19);
  v12 = System_Single__ToString_64172632(v20, &format, (const MethodInfo *)StringLiteral_1146/*"0.00"*/);
  v22 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_1BDB9B4(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_18:
      v24 = sub_1BDBAF8(v12);
      sub_1BDB9A0(v24, 0LL);
    }
  }
  if ( v16->max_length <= 3 )
LABEL_17:
    sub_1BDBADC(v12, v13, v14);
  v16->m_Items[3] = v22;
  sub_1BDB81C((CGThumbnailListItem_o *)&v16->m_Items[3], (int32_t)v22, v14, v21);
  return System_String__Format_62613688((System_String_o *)StringLiteral_25215/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/, v16, 0LL);
}


System_String_o *__fastcall FadeLogger__GetFadeLog(const MethodInfo *method)
{
  __int64 v1; // x1
  FadeLogger_c *v2; // x0
  FadeLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B43EBA & 1) == 0 )
  {
    sub_1BDB878(&FadeLogger_TypeInfo, v1);
    byte_4B43EBA = 1;
  }
  v2 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (FadeLogger_o *)Instance->fields.fadeLog) == 0LL )
    sub_1BDBAD4(Instance, v4);
  return (System_String_o *)((__int64 (__fastcall *)(FadeLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


FadeLogger_o *__fastcall FadeLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  FadeLogger_c *v2; // x0
  FadeLogger_o *v3; // x19
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  FadeLogger_c *v7; // x0
  struct FadeLogger_StaticFields *static_fields; // x0

  if ( (byte_4B43EB6 & 1) == 0 )
  {
    sub_1BDB878(&FadeLogger_TypeInfo, v1);
    byte_4B43EB6 = 1;
  }
  v2 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    v2 = FadeLogger_TypeInfo;
  }
  if ( !v2->static_fields->instance )
  {
    v3 = (FadeLogger_o *)sub_1BDBAC4(v2);
    FadeLogger___ctor(v3, v4);
    v7 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
      v7 = FadeLogger_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->instance = v3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->instance, (int32_t)v3, v5, v6);
    v2 = FadeLogger_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = FadeLogger_TypeInfo;
  }
  return v2->static_fields->instance;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FadeLogger_Info___ctor(FadeLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_String_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  unsigned __int64 v13; // x22
  __int64 v14; // x24
  FadeLogger_c *v15; // x0
  struct System_String_array *buff; // x25
  struct FadeLogger_StaticFields *static_fields; // x8
  Il2CppClass *BLANK; // x1
  System_Text_StringBuilder_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B43EBC & 1) == 0 )
  {
    sub_1BDB878(&FadeLogger_TypeInfo, *(_QWORD *)&maxBuff);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v5);
    sub_1BDB878(&string___TypeInfo, v6);
    byte_4B43EBC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v7 = (struct System_String_array *)sub_1BDB920(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
  if ( maxBuff >= 1 )
  {
    v13 = 0LL;
    v14 = 32LL;
    do
    {
      v15 = FadeLogger_TypeInfo;
      buff = this->fields.buff;
      if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
        v15 = FadeLogger_TypeInfo;
      }
      if ( !buff )
        sub_1BDBAD4(v15, v10);
      if ( v13 >= buff->max_length )
        sub_1BDBADC(v15, v10, v11);
      static_fields = v15->static_fields;
      BLANK = (Il2CppClass *)static_fields->BLANK;
      *(Il2CppClass **)((char *)&buff->obj.klass + v14) = (Il2CppClass *)static_fields->BLANK;
      sub_1BDB81C((CGThumbnailListItem_o *)((char *)buff + v14), (int32_t)BLANK, v11, v12);
      ++v13;
      v14 += 8LL;
    }
    while ( maxBuff != v13 );
  }
  this->fields.currentIndex = -1;
  v19 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  this->fields.sb = v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sb, (int32_t)v19, v20, v21);
}


void __fastcall FadeLogger_Info__Add(FadeLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
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


System_String_o *__fastcall FadeLogger_Info__ToString(FadeLogger_Info_o *this, const MethodInfo *method)
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
  FadeLogger_c *v15; // x0

  if ( (byte_4B43EBD & 1) == 0 )
  {
    sub_1BDB878(&FadeLogger_TypeInfo, method);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v3);
    sub_1BDB878(&StringLiteral_115/*" "*/, v4);
    sub_1BDB878(&StringLiteral_1773/*">"*/, v5);
    byte_4B43EBD = 1;
  }
  if ( this->fields.currentIndex == -1 )
  {
    v15 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
      v15 = FadeLogger_TypeInfo;
    }
    return v15->static_fields->BLANK;
  }
  else
  {
    sb = this->fields.sb;
    if ( !sb )
      goto LABEL_21;
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
LABEL_21:
      sub_1BDBAD4(sb, method);
    }
LABEL_16:
    sb = this->fields.sb;
    if ( !sb )
      goto LABEL_21;
    return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))sb->klass->vtable._3_ToString.method)(
                                sb,
                                sb->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
}