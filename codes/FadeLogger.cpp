void __fastcall FadeLogger___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B15685 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeLogger_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_932/*"--------"*/, v8, v9);
    byte_4B15685 = 1;
  }
  FadeLogger_TypeInfo->static_fields->BLANK = (struct System_String_o *)StringLiteral_932/*"--------"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FadeLogger_TypeInfo->static_fields,
    StringLiteral_932/*"--------"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FadeLogger___ctor(FadeLogger_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  FadeLogger_Info_o *v7; // x20
  const MethodInfo *v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B15681 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeLogger_Info_TypeInfo, method, v2);
    byte_4B15681 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (FadeLogger_Info_o *)sub_1BCAA2C(FadeLogger_Info_TypeInfo, v4, v5, v6);
  FadeLogger_Info___ctor(v7, 16, v8);
  this->fields.fadeLog = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall FadeLogger__AddFadeLog(System_String_o *logText, const MethodInfo *method)
{
  __int64 v2; // x2
  FadeLogger_c *v4; // x0
  FadeLogger_o *Instance; // x20
  FadeLogger_Info_o *buff; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B15683 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeLogger_TypeInfo, method, v2);
    byte_4B15683 = 1;
  }
  v4 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, method);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v4);
  buff = (FadeLogger_Info_o *)FadeLogger__get_Instance((const MethodInfo *)Instance);
  if ( !buff || !Instance || (buff = (FadeLogger_Info_o *)buff->fields.buff) == 0LL )
    sub_1BCAA3C(buff, v7);
  FadeLogger_Info__Add(buff, logText, v8);
}


void __fastcall FadeLogger__AddLog(
        FadeLogger_o *this,
        FadeLogger_Info_o *info,
        System_String_o *logText,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Object_array *v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  float v37; // s0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x20
  __int64 v46; // x0
  System_Enum_o v47; // [xsp+0h] [xbp-50h] BYREF
  int32_t v48; // [xsp+10h] [xbp-40h]
  System_String_o format; // [xsp+1Ch] [xbp-34h] BYREF

  *(float *)&format.klass = duration;
  if ( (byte_4B15682 & 1) == 0 )
  {
    sub_1BCA7E0(&MaskFade_Kind_TypeInfo, *(_QWORD *)&fadeKind, state);
    sub_1BCA7E0(&object___TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25277/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1213/*"0.00"*/, v13, v14);
    byte_4B15682 = 1;
  }
  v15 = (System_String_o *)sub_1BCA888(object___TypeInfo, 4LL);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  v23 = (System_Object_array *)v15;
  if ( funkName )
  {
    v15 = (System_String_o *)sub_1BCA91C(funkName, v15->klass->_1.element_class);
    if ( !v15 )
      goto LABEL_18;
  }
  if ( !v23->max_length )
    goto LABEL_17;
  v23->m_Items[0] = (Il2CppObject *)funkName;
  sub_1BCA784((PartyOrganizationUtility_o *)v23->m_Items, (int64_t)funkName, v17, v18, v19, v20, v21, v22);
  v47.klass = (System_Enum_c *)MaskFade_Kind_TypeInfo;
  v47.monitor = (void *)-1LL;
  v48 = fadeKind;
  v15 = System_Enum__ToString(&v47, 0LL);
  v30 = (int64_t)v15;
  if ( v15 )
  {
    v15 = (System_String_o *)sub_1BCA91C(v15, v23->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_18;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_17;
  v23->m_Items[1] = (Il2CppObject *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
  if ( state )
  {
    v15 = (System_String_o *)sub_1BCA91C(state, v23->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_18;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_17;
  v23->m_Items[2] = (Il2CppObject *)state;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->m_Items[2], (int64_t)state, v31, v32, v33, v34, v35, v36);
  v15 = System_Single__ToString_63289624(v37, &format, (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  v44 = (int64_t)v15;
  if ( v15 )
  {
    v15 = (System_String_o *)sub_1BCA91C(v15, v23->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_18:
      v46 = sub_1BCAA60(v15);
      sub_1BCA908(v46, 0LL);
    }
  }
  if ( v23->max_length <= 3 )
LABEL_17:
    sub_1BCAA44(v15, v16);
  v23->m_Items[3] = (Il2CppObject *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  return System_String__Format_62415728((System_String_o *)StringLiteral_25277/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/, v23, 0LL);
}


System_String_o *__fastcall FadeLogger__GetFadeLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FadeLogger_c *v3; // x0
  FadeLogger_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B15684 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeLogger_TypeInfo, v1, v2);
    byte_4B15684 = 1;
  }
  v3 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v1);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v3);
  if ( !Instance || (Instance = (FadeLogger_o *)Instance->fields.fadeLog) == 0LL )
    sub_1BCAA3C(Instance, v5);
  return (System_String_o *)((__int64 (__fastcall *)(FadeLogger_o *, void *))Instance->klass->vtable._3_ToString.method)(
                              Instance,
                              Instance->klass[1]._1.image);
}


FadeLogger_o *__fastcall FadeLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  FadeLogger_c *v4; // x0
  FadeLogger_o *v5; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  FadeLogger_c *v14; // x0
  struct FadeLogger_StaticFields *static_fields; // x0

  if ( (byte_4B15680 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeLogger_TypeInfo, v1, v2);
    byte_4B15680 = 1;
  }
  v4 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v1);
    v4 = FadeLogger_TypeInfo;
  }
  if ( !v4->static_fields->instance )
  {
    v5 = (FadeLogger_o *)sub_1BCAA2C(v4, v1, v2, v3);
    FadeLogger___ctor(v5, v6);
    v14 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v7);
      v14 = FadeLogger_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->instance = v5;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->instance, (int64_t)v5, v8, v9, v10, v11, v12, v13);
    v4 = FadeLogger_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = FadeLogger_TypeInfo;
  }
  return v4->static_fields->instance;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FadeLogger_Info___ctor(FadeLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  int64_t v17; // x2
  __int64 v18; // x3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  unsigned __int64 v23; // x22
  __int64 v24; // x24
  FadeLogger_c *v25; // x0
  struct System_String_array *buff; // x25
  int64_t *static_fields; // x8
  int64_t v28; // x1
  System_Text_StringBuilder_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B15686 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeLogger_TypeInfo, *(_QWORD *)&maxBuff, method);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v5, v6);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    byte_4B15686 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v9 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( maxBuff >= 1 )
  {
    v23 = 0LL;
    v24 = 32LL;
    do
    {
      v25 = FadeLogger_TypeInfo;
      buff = this->fields.buff;
      if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v16);
        v25 = FadeLogger_TypeInfo;
      }
      if ( !buff )
        sub_1BCAA3C(v25, v16);
      if ( v23 >= buff->max_length )
        sub_1BCAA44(v25, v16);
      static_fields = (int64_t *)v25->static_fields;
      v28 = *static_fields;
      *(Il2CppClass **)((char *)&buff->obj.klass + v24) = (Il2CppClass *)*static_fields;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)buff + v24), v28, v17, v18, v19, v20, v21, v22);
      ++v23;
      v24 += 8LL;
    }
    while ( maxBuff != v23 );
  }
  this->fields.currentIndex = -1;
  v29 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v16, v17, v18);
  System_Text_StringBuilder___ctor(v29, 0LL);
  this->fields.sb = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sb, (int64_t)v29, v30, v31, v32, v33, v34, v35);
}


void __fastcall FadeLogger_Info__Add(FadeLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_array *buff; // x8
  int v9; // w9
  Il2CppClass **v10; // x0

  buff = this->fields.buff;
  v9 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  this->fields.currentIndex = v9;
  if ( !buff )
    sub_1BCAA3C(this, name);
  if ( v9 >= buff->max_length )
    sub_1BCAA44(this, name);
  v10 = &buff->obj.klass + v9;
  v10[4] = (Il2CppClass *)name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
}


System_String_o *__fastcall FadeLogger_Info__ToString(FadeLogger_Info_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Text_StringBuilder_o *sb; // x0
  int32_t currentIndex; // w8
  int32_t maxNum; // w24
  int32_t v13; // w23
  System_String_o **v14; // x8
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v16; // w9
  FadeLogger_c *v18; // x0

  if ( (byte_4B15687 & 1) == 0 )
  {
    sub_1BCA7E0(&FadeLogger_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1858/*">"*/, v8, v9);
    byte_4B15687 = 1;
  }
  if ( this->fields.currentIndex == -1 )
  {
    v18 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, method);
      v18 = FadeLogger_TypeInfo;
    }
    return v18->static_fields->BLANK;
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
      v13 = this->fields.currentIndex;
      while ( 1 )
      {
        sb = this->fields.sb;
        if ( !sb )
          break;
        v14 = v13 == currentIndex ? (System_String_o **)&StringLiteral_1858/*">"*/ : (System_String_o **)&StringLiteral_116/*" "*/;
        sb = System_Text_StringBuilder__Append_61563116(sb, *v14, 0LL);
        buff = this->fields.buff;
        if ( !buff )
          break;
        v16 = (maxNum & (v13 >> 31)) + v13;
        if ( v16 >= buff->max_length )
          sub_1BCAA44(sb, method);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_61563116(sb, buff->m_Items[v16], 0LL);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_61563116(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        currentIndex = this->fields.currentIndex;
        maxNum = this->fields.maxNum;
        if ( --v13 <= currentIndex - maxNum )
          goto LABEL_16;
      }
LABEL_21:
      sub_1BCAA3C(sb, method);
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