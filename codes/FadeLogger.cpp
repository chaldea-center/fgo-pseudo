void FadeLogger___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C36DBA & 1) == 0 )
  {
    sub_1C32C20(&FadeLogger_TypeInfo);
    sub_1C32C20(&StringLiteral_877/*"--------"*/);
    byte_4C36DBA = 1;
  }
  FadeLogger_TypeInfo->static_fields->BLANK = (struct System_String_o *)StringLiteral_877/*"--------"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)FadeLogger_TypeInfo->static_fields, StringLiteral_877/*"--------"*/, v1, v2);
}


void FadeLogger___ctor(FadeLogger_o *this, const MethodInfo *method)
{
  FadeLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C36DB6 & 1) == 0 )
  {
    sub_1C32C20(&FadeLogger_Info_TypeInfo);
    byte_4C36DB6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (FadeLogger_Info_o *)sub_1C32E6C(FadeLogger_Info_TypeInfo);
  FadeLogger_Info___ctor(v3, 16, v4);
  this->fields.fadeLog = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v5, v6);
}


void FadeLogger__AddFadeLog(System_String_o *logText, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  FadeLogger_o *Instance; // x20
  FadeLogger_Info_o *buff; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C36DB8 & 1) == 0 )
  {
    sub_1C32C20(&FadeLogger_TypeInfo);
    byte_4C36DB8 = 1;
  }
  v3 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v3);
  buff = (FadeLogger_Info_o *)FadeLogger__get_Instance((const MethodInfo *)Instance);
  if ( !buff || !Instance || (buff = (FadeLogger_Info_o *)buff->fields.buff) == 0 )
    sub_1C32E7C(buff);
  FadeLogger_Info__Add(buff, logText, v6);
}


void FadeLogger__AddLog(
        FadeLogger_o *this,
        FadeLogger_Info_o *info,
        System_String_o *logText,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C32E7C(this);
  FadeLogger_Info__Add(info, logText, (const MethodInfo *)logText);
}


System_String_o *FadeLogger__CreateFadeLogText(
        System_String_o *funkName,
        int32_t fadeKind,
        System_String_o *state,
        float duration,
        UnityEngine_GameObject_o *gameObj,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Object_array *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  float v18; // s0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x20
  __int64 v23; // x0
  System_Enum_o v24; // [xsp+0h] [xbp-50h] BYREF
  int32_t v25; // [xsp+10h] [xbp-40h]
  System_String_o format; // [xsp+1Ch] [xbp-34h] BYREF

  *(float *)&format.klass = duration;
  if ( (byte_4C36DB7 & 1) == 0 )
  {
    sub_1C32C20(&MaskFade_Kind_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_25133/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/);
    sub_1C32C20(&StringLiteral_1126/*"0.00"*/);
    byte_4C36DB7 = 1;
  }
  v9 = (System_String_o *)sub_1C32CC8(object___TypeInfo, 4);
  if ( !v9 )
    sub_1C32E7C(0);
  v12 = (System_Object_array *)v9;
  if ( funkName )
  {
    v9 = (System_String_o *)sub_1C32D5C(funkName, v9->klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_17;
  v12->m_Items[0] = (Il2CppObject *)funkName;
  sub_1C32BC4((CGThumbnailListItem_o *)v12->m_Items, (int32_t)funkName, v10, v11);
  v24.klass = (System_Enum_c *)MaskFade_Kind_TypeInfo;
  v24.monitor = (void *)-1LL;
  v25 = fadeKind;
  v9 = System_Enum__ToString(&v24, 0);
  v15 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_1C32D5C(v9, v12->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( LODWORD(v12->max_length) <= 1 )
    goto LABEL_17;
  v12->m_Items[1] = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->m_Items[1], (int32_t)v15, v13, v14);
  if ( state )
  {
    v9 = (System_String_o *)sub_1C32D5C(state, v12->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( LODWORD(v12->max_length) <= 2 )
    goto LABEL_17;
  v12->m_Items[2] = (Il2CppObject *)state;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->m_Items[2], (int32_t)state, v16, v17);
  v9 = System_Single__ToString_65113804(v18, &format, (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  v21 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_1C32D5C(v9, v12->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_18:
      v23 = sub_1C32EA0(v9);
      sub_1C32D48(v23, 0);
    }
  }
  if ( LODWORD(v12->max_length) <= 3 )
LABEL_17:
    sub_1C32E84(v9);
  v12->m_Items[3] = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->m_Items[3], (int32_t)v21, v19, v20);
  return System_String__Format_63559972((System_String_o *)StringLiteral_25133/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/, v12, 0);
}


System_String_o *FadeLogger__GetFadeLog(const MethodInfo *method)
{
  FadeLogger_c *v1; // x0
  FadeLogger_o *Instance; // x0

  if ( (byte_4C36DB9 & 1) == 0 )
  {
    sub_1C32C20(&FadeLogger_TypeInfo);
    byte_4C36DB9 = 1;
  }
  v1 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (FadeLogger_o *)Instance->fields.fadeLog) == 0 )
    sub_1C32E7C(Instance);
  return (System_String_o *)((__int64 (__fastcall *)(FadeLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                              Instance,
                              Instance->klass->vtable._3_ToString.method);
}


FadeLogger_o *FadeLogger__get_Instance(const MethodInfo *method)
{
  FadeLogger_c *v1; // x0
  FadeLogger_o *v2; // x19
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  FadeLogger_c *v6; // x0
  struct FadeLogger_StaticFields *static_fields; // x0

  if ( (byte_4C36DB5 & 1) == 0 )
  {
    sub_1C32C20(&FadeLogger_TypeInfo);
    byte_4C36DB5 = 1;
  }
  v1 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    v1 = FadeLogger_TypeInfo;
  }
  if ( !v1->static_fields->instance )
  {
    v2 = (FadeLogger_o *)sub_1C32E6C(v1);
    FadeLogger___ctor(v2, v3);
    v6 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
      v6 = FadeLogger_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->instance = v2;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->instance, (int32_t)v2, v4, v5);
    v1 = FadeLogger_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = FadeLogger_TypeInfo;
  }
  return v1->static_fields->instance;
}


void FadeLogger_Info___ctor(FadeLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  struct System_String_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  unsigned __int64 v10; // x22
  __int64 v11; // x24
  FadeLogger_c *v12; // x0
  struct System_String_array *buff; // x25
  struct FadeLogger_StaticFields *static_fields; // x8
  Il2CppClass *BLANK; // x1
  System_Text_StringBuilder_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C36DBB & 1) == 0 )
  {
    sub_1C32C20(&FadeLogger_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    byte_4C36DBB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.maxNum = maxBuff;
  v5 = (struct System_String_array *)sub_1C32CC8(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
  if ( maxBuff >= 1 )
  {
    v10 = 0;
    v11 = 32;
    do
    {
      v12 = FadeLogger_TypeInfo;
      buff = this->fields.buff;
      if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
        v12 = FadeLogger_TypeInfo;
      }
      if ( !buff )
        sub_1C32E7C(v12);
      if ( v10 >= LODWORD(buff->max_length) )
        sub_1C32E84(v12);
      static_fields = v12->static_fields;
      BLANK = (Il2CppClass *)static_fields->BLANK;
      *(Il2CppClass **)((char *)&buff->obj.klass + v11) = (Il2CppClass *)static_fields->BLANK;
      sub_1C32BC4((CGThumbnailListItem_o *)((char *)buff + v11), (int32_t)BLANK, v8, v9);
      ++v10;
      v11 += 8;
    }
    while ( maxBuff != v10 );
  }
  this->fields.currentIndex = -1;
  v16 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0);
  this->fields.sb = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sb, (int32_t)v16, v17, v18);
}


void FadeLogger_Info__Add(FadeLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_array *buff; // x8
  int32_t v5; // w9
  Il2CppClass **v6; // x0

  buff = this->fields.buff;
  v5 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v5;
  if ( !buff )
    sub_1C32E7C(this);
  if ( (unsigned int)v5 >= LODWORD(buff->max_length) )
    sub_1C32E84(this);
  v6 = &buff->obj.klass + v5;
  v6[4] = (Il2CppClass *)name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 4), (int32_t)name, (int32_t)method, v3);
}


System_String_o *FadeLogger_Info__ToString(FadeLogger_Info_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w24
  int32_t v6; // w23
  System_String_o **v7; // x8
  struct System_String_array *buff; // x8
  unsigned int v9; // w9
  FadeLogger_c *v11; // x0

  if ( (byte_4C36DBC & 1) == 0 )
  {
    sub_1C32C20(&FadeLogger_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_1750/*">"*/);
    byte_4C36DBC = 1;
  }
  if ( this->fields.currentIndex == -1 )
  {
    v11 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
      v11 = FadeLogger_TypeInfo;
    }
    return v11->static_fields->BLANK;
  }
  else
  {
    sb = this->fields.sb;
    if ( !sb )
      goto LABEL_21;
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
        v7 = v6 == currentIndex ? (System_String_o **)&StringLiteral_1750/*">"*/ : (System_String_o **)&StringLiteral_113/*" "*/;
        sb = System_Text_StringBuilder__Append_63603608(sb, *v7, 0);
        buff = this->fields.buff;
        if ( !buff )
          break;
        v9 = (maxNum & (v6 >> 31)) + v6;
        if ( v9 >= LODWORD(buff->max_length) )
          sub_1C32E84(sb);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_63603608(sb, buff->m_Items[v9], 0);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_63603608(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        currentIndex = this->fields.currentIndex;
        maxNum = this->fields.maxNum;
        if ( --v6 <= currentIndex - maxNum )
          goto LABEL_16;
      }
LABEL_21:
      sub_1C32E7C(sb);
    }
LABEL_16:
    sb = this->fields.sb;
    if ( !sb )
      goto LABEL_21;
    return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))sb->klass->vtable._3_ToString.methodPtr)(
                                sb,
                                sb->klass->vtable._3_ToString.method);
  }
}