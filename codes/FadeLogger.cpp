void FadeLogger___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596FBA6 & 1) == 0 )
  {
    sub_2213A60(&FadeLogger_TypeInfo);
    sub_2213A60(&StringLiteral_939/*"--------"*/);
    byte_596FBA6 = 1;
  }
  v7 = StringLiteral_939/*"--------"*/;
  FadeLogger_TypeInfo->static_fields->BLANK = (struct System_String_o *)StringLiteral_939/*"--------"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)FadeLogger_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void FadeLogger___ctor(FadeLogger_o *this, const MethodInfo *method)
{
  FadeLogger_Info_o *v3; // x20
  const MethodInfo *v4; // x2
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596FBA2 & 1) == 0 )
  {
    sub_2213A60(&FadeLogger_Info_TypeInfo);
    byte_596FBA2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (FadeLogger_Info_o *)sub_2213CCC(FadeLogger_Info_TypeInfo);
  FadeLogger_Info___ctor(v3, 16, v4);
  this->fields.fadeLog = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
}


void FadeLogger__AddFadeLog(System_String_o *logText, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  FadeLogger_o *Instance; // x20
  FadeLogger_Info_o *buff; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596FBA4 & 1) == 0 )
  {
    sub_2213A60(&FadeLogger_TypeInfo);
    byte_596FBA4 = 1;
  }
  v3 = FadeLogger_TypeInfo;
  if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, method);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v3);
  buff = (FadeLogger_Info_o *)FadeLogger__get_Instance((const MethodInfo *)Instance);
  if ( !buff || !Instance || (buff = (FadeLogger_Info_o *)buff->fields.buff) == 0 )
    sub_2213CDC(buff, v6);
  FadeLogger_Info__Add(buff, logText, v7);
}


void FadeLogger__AddLog(
        FadeLogger_o *this,
        FadeLogger_Info_o *info,
        System_String_o *logText,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Object_array *v17; // x19
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  float v32; // s0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x20
  __int64 v41; // x0
  System_Enum_o v42; // [xsp+0h] [xbp-50h] BYREF
  int32_t v43; // [xsp+10h] [xbp-40h]
  System_String_o format; // [xsp+1Ch] [xbp-34h] BYREF

  *(float *)&format.klass = duration;
  if ( (byte_596FBA3 & 1) == 0 )
  {
    sub_2213A60(&MaskFade_Kind_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_26528/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/);
    sub_2213A60(&StringLiteral_1202/*"0.00"*/);
    byte_596FBA3 = 1;
  }
  v9 = (System_String_o *)sub_2213B20(object___TypeInfo, 4);
  if ( !v9 )
    sub_2213CDC(0, v10);
  v17 = (System_Object_array *)v9;
  if ( funkName )
  {
    v9 = (System_String_o *)sub_2213BB4(funkName, v9->klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( !LODWORD(v17->max_length) )
    goto LABEL_17;
  v17->m_Items[0] = (Il2CppObject *)funkName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v17->m_Items, (int32_t)funkName, v11, v12, v13, v14, v15, v16);
  v43 = fadeKind;
  v42.klass = (System_Enum_c *)MaskFade_Kind_TypeInfo;
  v42.monitor = (void *)-1LL;
  v9 = System_Enum__ToString(&v42, 0);
  v25 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_2213BB4(v9, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( (v17->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  v17->m_Items[1] = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->m_Items[1], (int32_t)v25, v19, v20, v21, v22, v23, v24);
  if ( state )
  {
    v9 = (System_String_o *)sub_2213BB4(state, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_17;
  v17->m_Items[2] = (Il2CppObject *)state;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->m_Items[2], (int32_t)state, v26, v27, v28, v29, v30, v31);
  v9 = System_Single__ToString_77226200(v32, &format, (const MethodInfo *)StringLiteral_1202/*"0.00"*/);
  v39 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_2213BB4(v9, v17->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_18:
      v41 = sub_2213D00(v9, v18);
      sub_2213BA0(v41, 0);
    }
  }
  if ( (v17->max_length & 0xFFFFFFFC) == 0 )
LABEL_17:
    sub_2213CE4(v9);
  v17->m_Items[3] = v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->m_Items[3], (int32_t)v39, v33, v34, v35, v36, v37, v38);
  return System_String__Format_75698016((System_String_o *)StringLiteral_26528/*"{0} カラー[{1}] 状態[{2}] 再生時間[{3}s]"*/, v17, 0);
}


System_String_o *FadeLogger__GetFadeLog(const MethodInfo *method)
{
  __int64 v1; // x1
  FadeLogger_c *v2; // x0
  FadeLogger_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596FBA5 & 1) == 0 )
  {
    sub_2213A60(&FadeLogger_TypeInfo);
    byte_596FBA5 = 1;
  }
  v2 = FadeLogger_TypeInfo;
  if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v1);
  Instance = FadeLogger__get_Instance((const MethodInfo *)v2);
  if ( !Instance || (Instance = (FadeLogger_o *)Instance->fields.fadeLog) == 0 )
    sub_2213CDC(Instance, v4);
  return (System_String_o *)((__int64 (__fastcall *)(FadeLogger_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                              Instance,
                              Instance->klass->vtable._3_ToString.method);
}


FadeLogger_o *FadeLogger__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  FadeLogger_c *v2; // x0
  FadeLogger_o *v3; // x19
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  FadeLogger_c *v12; // x0
  struct FadeLogger_StaticFields *static_fields; // x0

  if ( (byte_596FBA1 & 1) == 0 )
  {
    sub_2213A60(&FadeLogger_TypeInfo);
    byte_596FBA1 = 1;
  }
  v2 = FadeLogger_TypeInfo;
  if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v1);
    v2 = FadeLogger_TypeInfo;
  }
  if ( !v2->static_fields->instance )
  {
    v3 = (FadeLogger_o *)sub_2213CCC(v2);
    FadeLogger___ctor(v3, v4);
    v12 = FadeLogger_TypeInfo;
    if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v5);
      v12 = FadeLogger_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->instance = v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->instance, (int32_t)v3, v6, v7, v8, v9, v10, v11);
    v2 = FadeLogger_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = FadeLogger_TypeInfo;
  }
  return v2->static_fields->instance;
}


void FadeLogger_Info___ctor(FadeLogger_Info_o *this, int32_t maxBuff, const MethodInfo *method)
{
  Il2CppClass *v5; // x0
  struct System_String_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  unsigned __int64 v20; // x22
  __int64 v21; // x24
  FadeLogger_c *v22; // x0
  struct System_String_array *buff; // x25
  struct FadeLogger_StaticFields *static_fields; // x8
  Il2CppClass *BLANK; // x1
  System_Text_StringBuilder_o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_596FBA7 & 1) == 0 )
  {
    sub_2213A60(&FadeLogger_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_596FBA7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = string___TypeInfo;
  this->fields.maxNum = maxBuff;
  v6 = (struct System_String_array *)sub_2213B20(v5, (unsigned int)maxBuff);
  this->fields.buff = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  if ( maxBuff >= 1 )
  {
    v20 = 0;
    v21 = 32;
    do
    {
      v22 = FadeLogger_TypeInfo;
      buff = this->fields.buff;
      if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v13);
        v22 = FadeLogger_TypeInfo;
      }
      if ( !buff )
        sub_2213CDC(v22, v13);
      if ( v20 >= LODWORD(buff->max_length) )
        sub_2213CE4(v22);
      static_fields = v22->static_fields;
      BLANK = (Il2CppClass *)static_fields->BLANK;
      *(Il2CppClass **)((char *)&buff->obj.klass + v21) = (Il2CppClass *)static_fields->BLANK;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)buff + v21),
        (int32_t)BLANK,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      ++v20;
      v21 += 8;
    }
    while ( maxBuff != v20 );
  }
  this->fields.currentIndex = -1;
  v26 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v26, 0);
  this->fields.sb = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sb, (int32_t)v26, v27, v28, v29, v30, v31, v32);
}


void FadeLogger_Info__Add(FadeLogger_Info_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v8; // w8
  struct System_String_array *buff; // x9
  Il2CppClass **v10; // x0

  v8 = (this->fields.currentIndex + 1) % this->fields.maxNum;
  buff = this->fields.buff;
  this->fields.currentIndex = v8;
  if ( !buff )
    sub_2213CDC(this, name);
  if ( (unsigned int)v8 >= LODWORD(buff->max_length) )
    sub_2213CE4(this);
  v10 = &buff->obj.klass + v8;
  v10[4] = (Il2CppClass *)name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v10 + 4),
    (int32_t)name,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_596FBA8 & 1) == 0 )
  {
    sub_2213A60(&FadeLogger_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_1831/*">"*/);
    byte_596FBA8 = 1;
  }
  if ( this->fields.currentIndex == -1 )
  {
    v11 = FadeLogger_TypeInfo;
    if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, method);
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
        v7 = v6 == currentIndex ? (System_String_o **)&StringLiteral_1831/*">"*/ : (System_String_o **)&StringLiteral_113/*" "*/;
        sb = System_Text_StringBuilder__Append_75735064(sb, *v7, 0);
        buff = this->fields.buff;
        if ( !buff )
          break;
        v9 = (maxNum & (v6 >> 31)) + v6;
        if ( v9 >= LODWORD(buff->max_length) )
          sub_2213CE4(sb);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_75735064(sb, buff->m_Items[v9], 0);
        sb = this->fields.sb;
        if ( !sb )
          break;
        System_Text_StringBuilder__Append_75735064(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        currentIndex = this->fields.currentIndex;
        maxNum = this->fields.maxNum;
        if ( --v6 <= currentIndex - maxNum )
          goto LABEL_16;
      }
LABEL_21:
      sub_2213CDC(sb, method);
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