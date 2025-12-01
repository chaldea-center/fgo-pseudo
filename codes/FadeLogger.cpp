void FadeLogger___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CC67D3 & 1) == 0 )
  {
    sub_1C713B0(&FadeLogger_TypeInfo);
    sub_1C713B0(&StringLiteral_874/*"--------"*/);
    byte_4CC67D3 = 1;
  }
  FadeLogger_TypeInfo->static_fields->BLANK = (struct System_String_o *)StringLiteral_874/*"--------"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)FadeLogger_TypeInfo->static_fields,
    StringLiteral_874/*"--------"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void FadeLogger___ctor(FadeLogger_o *this, const MethodInfo *method)
{
  FadeLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC67CF & 1) == 0 )
  {
    sub_1C713B0(&FadeLogger_Info_TypeInfo);
    byte_4CC67CF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (FadeLogger_Info_o *)sub_1C715FC(FadeLogger_Info_TypeInfo);
  FadeLogger_Info___ctor(v3, 16, v4);
  this->fields.fadeLog = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
}


void FadeLogger__AddFadeLog(System_String_o *logText, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  FadeLogger_o *Instance; // x20
  FadeLogger_Info_o *buff; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4CC67D1 & 1) == 0 )
  {
    sub_1C713B0(&FadeLogger_TypeInfo);
    byte_4CC67D1 = 1;
  }
  v3 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v3);
  buff = (FadeLogger_Info_o *)FadeLogger__get_Instance((const MethodInfo *)Instance);
  if ( !buff || !Instance || (buff = (FadeLogger_Info_o *)buff->fields.buff) == 0 )
    sub_1C71608(buff, v6);
  FadeLogger_Info__Add(buff, logText, v7);
}


void FadeLogger__AddLog(
        FadeLogger_o *this,
        FadeLogger_Info_o *info,
        System_String_o *logText,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C71608(this, 0);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Object_array *v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  float v31; // s0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *v38; // x20
  __int64 v40; // x0
  System_Enum_o v41; // [xsp+0h] [xbp-50h] BYREF
  int32_t v42; // [xsp+10h] [xbp-40h]
  System_String_o format; // [xsp+1Ch] [xbp-34h] BYREF

  *(float *)&format.klass = duration;
  if ( (byte_4CC67D0 & 1) == 0 )
  {
    sub_1C713B0(&MaskFade_Kind_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&StringLiteral_25268/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/);
    sub_1C713B0(&StringLiteral_1119/*"0.00"*/);
    byte_4CC67D0 = 1;
  }
  v9 = (System_String_o *)sub_1C71458(object___TypeInfo, 4);
  if ( !v9 )
    sub_1C71608(0, v10);
  v17 = (System_Object_array *)v9;
  if ( funkName )
  {
    v9 = (System_String_o *)sub_1C714EC(funkName, v9->klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( !LODWORD(v17->max_length) )
    goto LABEL_17;
  v17->m_Items[0] = (Il2CppObject *)funkName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v17->m_Items, (int32_t)funkName, v11, v12, v13, v14, v15, v16);
  v41.klass = (System_Enum_c *)MaskFade_Kind_TypeInfo;
  v41.monitor = (void *)-1LL;
  v42 = fadeKind;
  v9 = System_Enum__ToString(&v41, 0);
  v24 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_1C714EC(v9, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( LODWORD(v17->max_length) <= 1 )
    goto LABEL_17;
  v17->m_Items[1] = v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v17->m_Items[1], (int32_t)v24, v18, v19, v20, v21, v22, v23);
  if ( state )
  {
    v9 = (System_String_o *)sub_1C714EC(state, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_17;
  v17->m_Items[2] = (Il2CppObject *)state;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v17->m_Items[2], (int32_t)state, v25, v26, v27, v28, v29, v30);
  v9 = System_Single__ToString_65625372(v31, &format, (const MethodInfo *)StringLiteral_1119/*"0.00"*/);
  v38 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_1C714EC(v9, v17->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_18:
      v40 = sub_1C7162C(v9);
      sub_1C714D8(v40, 0);
    }
  }
  if ( LODWORD(v17->max_length) <= 3 )
LABEL_17:
    sub_1C71610(v9);
  v17->m_Items[3] = v38;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v17->m_Items[3], (int32_t)v38, v32, v33, v34, v35, v36, v37);
  return System_String__Format_64073168((System_String_o *)StringLiteral_25268/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/, v17, 0);
}


System_String_o *FadeLogger__GetFadeLog(const MethodInfo *method)
{
  FadeLogger_c *v1; // x0
  FadeLogger_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC67D2 & 1) == 0 )
  {
    sub_1C713B0(&FadeLogger_TypeInfo);
    byte_4CC67D2 = 1;
  }
  v1 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v1);
  if ( !Instance || (Instance = (FadeLogger_o *)Instance->fields.fadeLog) == 0 )
    sub_1C71608(Instance, v3);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  FadeLogger_c *v10; // x0
  struct FadeLogger_StaticFields *static_fields; // x0

  if ( (byte_4CC67CE & 1) == 0 )
  {
    sub_1C713B0(&FadeLogger_TypeInfo);
    byte_4CC67CE = 1;
  }
  v1 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    v1 = FadeLogger_TypeInfo;
  }
  if ( !v1->static_fields->instance )
  {
    v2 = (FadeLogger_o *)sub_1C715FC(v1);
    FadeLogger___ctor(v2, v3);
    v10 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
      v10 = FadeLogger_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->instance = v2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->instance, (int32_t)v2, v4, v5, v6, v7, v8, v9);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned __int64 v19; // x22
  __int64 v20; // x24
  FadeLogger_c *v21; // x0
  struct System_String_array *buff; // x25
  struct FadeLogger_StaticFields *static_fields; // x8
  Il2CppClass *BLANK; // x1
  System_Text_StringBuilder_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CC67D4 & 1) == 0 )
  {
    sub_1C713B0(&FadeLogger_TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    byte_4CC67D4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.maxNum = maxBuff;
  v5 = (struct System_String_array *)sub_1C71458(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  if ( maxBuff >= 1 )
  {
    v19 = 0;
    v20 = 32;
    do
    {
      v21 = FadeLogger_TypeInfo;
      buff = this->fields.buff;
      if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
        v21 = FadeLogger_TypeInfo;
      }
      if ( !buff )
        sub_1C71608(v21, v12);
      if ( v19 >= LODWORD(buff->max_length) )
        sub_1C71610(v21);
      static_fields = v21->static_fields;
      BLANK = (Il2CppClass *)static_fields->BLANK;
      *(Il2CppClass **)((char *)&buff->obj.klass + v20) = (Il2CppClass *)static_fields->BLANK;
      sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)buff + v20), (int32_t)BLANK, v13, v14, v15, v16, v17, v18);
      ++v19;
      v20 += 8;
    }
    while ( maxBuff != v19 );
  }
  this->fields.currentIndex = -1;
  v25 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v25, 0);
  this->fields.sb = v25;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sb, (int32_t)v25, v26, v27, v28, v29, v30, v31);
}


void FadeLogger_Info__Add(FadeLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_array *buff; // x8
  int32_t v9; // w9
  Il2CppClass **v10; // x0

  buff = this->fields.buff;
  v9 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v9;
  if ( !buff )
    sub_1C71608(this, name);
  if ( (unsigned int)v9 >= LODWORD(buff->max_length) )
    sub_1C71610(this);
  v10 = &buff->obj.klass + v9;
  v10[4] = (Il2CppClass *)name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 4), (int32_t)name, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4CC67D5 & 1) == 0 )
  {
    sub_1C713B0(&FadeLogger_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_1743/*">"*/);
    byte_4CC67D5 = 1;
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
        v7 = v6 == currentIndex ? (System_String_o **)&StringLiteral_1743/*">"*/ : (System_String_o **)&StringLiteral_113/*" "*/;
        sb = System_Text_StringBuilder__Append_64115684(sb, *v7, 0);
        buff = this->fields.buff;
        if ( !buff )
          break;
        v9 = (maxNum & (v6 >> 31)) + v6;
        if ( v9 >= LODWORD(buff->max_length) )
          sub_1C71610(sb);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_64115684(sb, buff->m_Items[v9], 0);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_64115684(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        currentIndex = this->fields.currentIndex;
        maxNum = this->fields.maxNum;
        if ( --v6 <= currentIndex - maxNum )
          goto LABEL_16;
      }
LABEL_21:
      sub_1C71608(sb, method);
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