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

  if ( (byte_4C213D2 & 1) == 0 )
  {
    sub_1C3B764(&FadeLogger_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_914/*"--moving"*/, v8);
    byte_4C213D2 = 1;
  }
  FadeLogger_TypeInfo->static_fields->BLANK = (struct System_String_o *)StringLiteral_914/*"--moving"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)FadeLogger_TypeInfo->static_fields,
    StringLiteral_914/*"--moving"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FadeLogger___ctor(FadeLogger_o *this, const MethodInfo *method)
{
  FadeLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C213CE & 1) == 0 )
  {
    sub_1C3B764(&FadeLogger_Info_TypeInfo, method);
    byte_4C213CE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (FadeLogger_Info_o *)sub_1C3B9B0(FadeLogger_Info_TypeInfo);
  FadeLogger_Info___ctor(v3, 16, v4);
  this->fields.fadeLog = v3;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall FadeLogger__AddFadeLog(System_String_o *logText, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  FadeLogger_o *Instance; // x20
  FadeLogger_Info_o *buff; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C213D0 & 1) == 0 )
  {
    sub_1C3B764(&FadeLogger_TypeInfo, method);
    byte_4C213D0 = 1;
  }
  v3 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v3);
  buff = (FadeLogger_Info_o *)FadeLogger__get_Instance((const MethodInfo *)Instance);
  if ( !buff || !Instance || (buff = (FadeLogger_Info_o *)buff->fields.buff) == 0LL )
    sub_1C3B9C0(buff, v6);
  FadeLogger_Info__Add(buff, logText, v7);
}


void __fastcall FadeLogger__AddLog(
        FadeLogger_o *this,
        FadeLogger_Info_o *info,
        System_String_o *logText,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C3B9C0(this, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Object_array *v20; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  float v34; // s0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x20
  __int64 v43; // x0
  System_Enum_o v44; // [xsp+0h] [xbp-50h] BYREF
  int32_t v45; // [xsp+10h] [xbp-40h]
  System_String_o format; // [xsp+1Ch] [xbp-34h] BYREF

  *(float *)&format.klass = duration;
  if ( (byte_4C213CF & 1) == 0 )
  {
    sub_1C3B764(&MaskFade_Kind_TypeInfo, *(_QWORD *)&fadeKind);
    sub_1C3B764(&object___TypeInfo, v9);
    sub_1C3B764(&StringLiteral_25536, v10);
    sub_1C3B764(&StringLiteral_1195/*"1.1.0"*/, v11);
    byte_4C213CF = 1;
  }
  v12 = (System_String_o *)sub_1C3B80C(object___TypeInfo, 4LL);
  if ( !v12 )
    sub_1C3B9C0(0LL, v13);
  v20 = (System_Object_array *)v12;
  if ( funkName )
  {
    v12 = (System_String_o *)sub_1C3B8A0(funkName, v12->klass->_1.element_class);
    if ( !v12 )
      goto LABEL_18;
  }
  if ( !v20->max_length )
    goto LABEL_17;
  v20->m_Items[0] = (Il2CppObject *)funkName;
  sub_1C3B708((PartyOrganizationUtility_o *)v20->m_Items, (int64_t)funkName, v14, v15, v16, v17, v18, v19);
  v44.klass = (System_Enum_c *)MaskFade_Kind_TypeInfo;
  v44.monitor = (void *)-1LL;
  v45 = fadeKind;
  v12 = System_Enum__ToString(&v44, 0LL);
  v27 = (int64_t)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_1C3B8A0(v12, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_18;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_17;
  v20->m_Items[1] = (Il2CppObject *)v27;
  sub_1C3B708((PartyOrganizationUtility_o *)&v20->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  if ( state )
  {
    v12 = (System_String_o *)sub_1C3B8A0(state, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_18;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_17;
  v20->m_Items[2] = (Il2CppObject *)state;
  sub_1C3B708((PartyOrganizationUtility_o *)&v20->m_Items[2], (int64_t)state, v28, v29, v30, v31, v32, v33);
  v12 = System_Single__ToString_64257276(v34, &format, (const MethodInfo *)StringLiteral_1195/*"1.1.0"*/);
  v41 = (int64_t)v12;
  if ( v12 )
  {
    v12 = (System_String_o *)sub_1C3B8A0(v12, v20->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_18:
      v43 = sub_1C3B9E4(v12);
      sub_1C3B88C(v43, 0LL);
    }
  }
  if ( v20->max_length <= 3 )
LABEL_17:
    sub_1C3B9C8(v12, v13);
  v20->m_Items[3] = (Il2CppObject *)v41;
  sub_1C3B708((PartyOrganizationUtility_o *)&v20->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  return System_String__Format_63383120((System_String_o *)StringLiteral_25536, v20, 0LL);
}


System_String_o *__fastcall FadeLogger__GetFadeLog(const MethodInfo *method)
{
  __int64 v1; // x1
  FadeLogger_c *v2; // x0
  FadeLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C213D1 & 1) == 0 )
  {
    sub_1C3B764(&FadeLogger_TypeInfo, v1);
    byte_4C213D1 = 1;
  }
  v2 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (FadeLogger_o *)Instance->fields.fadeLog) == 0LL )
    sub_1C3B9C0(Instance, v4);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  FadeLogger_c *v11; // x0
  struct FadeLogger_StaticFields *static_fields; // x0

  if ( (byte_4C213CD & 1) == 0 )
  {
    sub_1C3B764(&FadeLogger_TypeInfo, v1);
    byte_4C213CD = 1;
  }
  v2 = FadeLogger_TypeInfo;
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    v2 = FadeLogger_TypeInfo;
  }
  if ( !v2->static_fields->instance )
  {
    v3 = (FadeLogger_o *)sub_1C3B9B0(v2);
    FadeLogger___ctor(v3, v4);
    v11 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
      v11 = FadeLogger_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->instance = v3;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->instance, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  unsigned __int64 v21; // x22
  __int64 v22; // x24
  FadeLogger_c *v23; // x0
  struct System_String_array *buff; // x25
  int64_t *static_fields; // x8
  int64_t v26; // x1
  System_Text_StringBuilder_o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4C213D3 & 1) == 0 )
  {
    sub_1C3B764(&FadeLogger_TypeInfo, *(_QWORD *)&maxBuff);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v5);
    sub_1C3B764(&string___TypeInfo, v6);
    byte_4C213D3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maxNum = maxBuff;
  v7 = (struct System_String_array *)sub_1C3B80C(string___TypeInfo, (unsigned int)maxBuff);
  this->fields.buff = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  if ( maxBuff >= 1 )
  {
    v21 = 0LL;
    v22 = 32LL;
    do
    {
      v23 = FadeLogger_TypeInfo;
      buff = this->fields.buff;
      if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
        v23 = FadeLogger_TypeInfo;
      }
      if ( !buff )
        sub_1C3B9C0(v23, v14);
      if ( v21 >= buff->max_length )
        sub_1C3B9C8(v23, v14);
      static_fields = (int64_t *)v23->static_fields;
      v26 = *static_fields;
      *(Il2CppClass **)((char *)&buff->obj.klass + v22) = (Il2CppClass *)*static_fields;
      sub_1C3B708((PartyOrganizationUtility_o *)((char *)buff + v22), v26, v15, v16, v17, v18, v19, v20);
      ++v21;
      v22 += 8LL;
    }
    while ( maxBuff != v21 );
  }
  this->fields.currentIndex = -1;
  v27 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v27, 0LL);
  this->fields.sb = v27;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.sb, (int64_t)v27, v28, v29, v30, v31, v32, v33);
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
    sub_1C3B9C0(this, name);
  if ( v9 >= buff->max_length )
    sub_1C3B9C8(this, name);
  v10 = &buff->obj.klass + v9;
  v10[4] = (Il2CppClass *)name;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 4), (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
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
  struct System_String_array *buff; // x8
  il2cpp_array_size_t v12; // w9
  FadeLogger_c *v14; // x0

  if ( (byte_4C213D4 & 1) == 0 )
  {
    sub_1C3B764(&FadeLogger_TypeInfo, method);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v3);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v4);
    sub_1C3B764(&StringLiteral_1847/*"A.D."*/, v5);
    byte_4C213D4 = 1;
  }
  if ( this->fields.currentIndex == -1 )
  {
    v14 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
      v14 = FadeLogger_TypeInfo;
    }
    return v14->static_fields->BLANK;
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
        v10 = v9 == currentIndex ? (System_String_o **)&StringLiteral_1847/*"A.D."*/ : (System_String_o **)&StringLiteral_117/*"   "*/;
        sb = System_Text_StringBuilder__Append_62529764(sb, *v10, 0LL);
        buff = this->fields.buff;
        if ( !buff )
          break;
        v12 = (maxNum & (v9 >> 31)) + v9;
        if ( v12 >= buff->max_length )
          sub_1C3B9C8(sb, method);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_62529764(sb, buff->m_Items[v12], 0LL);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_62529764(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        currentIndex = this->fields.currentIndex;
        maxNum = this->fields.maxNum;
        if ( --v9 <= currentIndex - maxNum )
          goto LABEL_16;
      }
LABEL_21:
      sub_1C3B9C0(sb, method);
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