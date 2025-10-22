void LogoMain___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct LogoMain_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C54573 & 1) == 0 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    sub_1C3E564(&StringLiteral_8499/*"LogoPlay"*/);
    byte_4C54573 = 1;
  }
  static_fields = LogoMain_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FADEIN_TIME = 0x3F0000003F000000LL;
  static_fields->FADEWAIT_TIME = 1.0;
  v4 = StringLiteral_8499/*"LogoPlay"*/;
  static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_8499/*"LogoPlay"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->SAVE_KEY, v4, v1, v2);
  LogoMain_TypeInfo->static_fields->isPlayLogo = 1;
}


void LogoMain___ctor(LogoMain_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LogoMain__EndFadein(LogoMain_o *this, const MethodInfo *method)
{
  LogoMain_c *v3; // x0

  if ( (byte_4C5456D & 1) == 0 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    sub_1C3E564(&StringLiteral_6599/*"Fadeout"*/);
    byte_4C5456D = 1;
  }
  this->fields.status = 2;
  v3 = LogoMain_TypeInfo;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v3 = LogoMain_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6599/*"Fadeout"*/,
    v3->static_fields->FADEWAIT_TIME,
    0);
}


void LogoMain__EndFadeout(LogoMain_o *this, const MethodInfo *method)
{
  LogoMain_o *v2; // x19
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 index; // x9
  int32_t v5; // w8

  v2 = this;
  if ( (byte_4C5456F & 1) == 0 )
  {
    this = (LogoMain_o *)sub_1C3E564(&StringLiteral_6597/*"Fadein"*/);
    byte_4C5456F = 1;
  }
  logoList = v2->fields.logoList;
  if ( !logoList )
    goto LABEL_7;
  index = v2->fields.index;
  if ( (unsigned int)index >= LODWORD(logoList->max_length) )
    sub_1C3E7C8(this, method);
  this = (LogoMain_o *)logoList->m_Items[index];
  if ( !this )
LABEL_7:
    sub_1C3E7C0(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v5 = v2->fields.index;
  v2->fields.status = 4;
  v2->fields.index = v5 + 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_6597/*"Fadein"*/, 0.2, 0);
}


void LogoMain__EndLogo(LogoMain_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v3; // x0
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 v5; // x21
  int max_length; // w9
  UnityEngine_Object_o *fsm; // x20
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_4C54570 & 1) == 0 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_5444/*"END_LOGO"*/);
    byte_4C54570 = 1;
  }
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
  if ( !byte_4C54621 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    byte_4C54621 = 1;
  }
  v3 = (UnityEngine_GameObject_o *)LogoMain_TypeInfo;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v3 = (UnityEngine_GameObject_o *)LogoMain_TypeInfo;
  }
  *(_BYTE *)(v3[7].fields.m_CachedPtr + 25) = 0;
  logoList = this->fields.logoList;
  this->fields.status = 0;
  if ( !logoList )
    goto LABEL_15;
  v5 = 0;
  while ( 1 )
  {
    max_length = logoList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C3E7C8(v3, method);
    v3 = logoList->m_Items[v5];
    if ( v3 )
    {
      UnityEngine_GameObject__SetActive(v3, 0, 0);
      logoList = this->fields.logoList;
      ++v5;
      if ( logoList )
        continue;
    }
    goto LABEL_15;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    v3 = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( v3 )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v3, (System_String_o *)StringLiteral_5444/*"END_LOGO"*/, 0);
      goto LABEL_21;
    }
LABEL_15:
    sub_1C3E7C0(v3, method);
  }
LABEL_21:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


void LogoMain__Fadein(LogoMain_o *this, const MethodInfo *method)
{
  LogoMain_o *v2; // x19
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 index; // x9
  int max_length; // w10
  Il2CppObject *Instance; // x20
  LogoMain_c *v7; // x8
  float FADEIN_TIME; // s8
  System_Action_o *v9; // x21

  v2 = this;
  if ( (byte_4C5456C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_LogoMain_EndFadein__);
    sub_1C3E564(&LogoMain_TypeInfo);
    this = (LogoMain_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5456C = 1;
  }
  logoList = v2->fields.logoList;
  if ( !logoList )
    goto LABEL_12;
  index = v2->fields.index;
  max_length = logoList->max_length;
  if ( (int)index < max_length )
  {
    v2->fields.status = 1;
    if ( (unsigned int)index >= max_length )
      sub_1C3E7C8(this, method);
    this = (LogoMain_o *)logoList->m_Items[index];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v7 = LogoMain_TypeInfo;
      }
      FADEIN_TIME = v7->static_fields->FADEIN_TIME;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)v2, Method_LogoMain_EndFadein__, 0);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, FADEIN_TIME, v9, 0);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(this, method);
  }
  LogoMain__EndLogo(v2, method);
}


void LogoMain__FadeinFirst(LogoMain_o *this, const MethodInfo *method)
{
  LogoMain_o *v2; // x19
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 index; // x9
  Il2CppObject *Instance; // x0
  LogoMain_c *v6; // x8
  CommonUI_o *v7; // x20
  float FADEIN_TIME; // s8
  System_Action_o *v9; // x21

  v2 = this;
  if ( (byte_4C5456B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_LogoMain_EndFadein__);
    sub_1C3E564(&LogoMain_TypeInfo);
    this = (LogoMain_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5456B = 1;
  }
  logoList = v2->fields.logoList;
  if ( !logoList )
    goto LABEL_10;
  index = v2->fields.index;
  if ( (unsigned int)index >= LODWORD(logoList->max_length) )
    sub_1C3E7C8(this, method);
  this = (LogoMain_o *)logoList->m_Items[index];
  if ( !this )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = LogoMain_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v6 = LogoMain_TypeInfo;
  }
  FADEIN_TIME = v6->static_fields->FADEIN_TIME;
  v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v2, Method_LogoMain_EndFadein__, 0);
  if ( !v7 )
LABEL_10:
    sub_1C3E7C0(this, method);
  CommonUI__maskFadein(v7, FADEIN_TIME, v9, 0);
}


void LogoMain__Fadeout(LogoMain_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  LogoMain_c *v4; // x8
  CommonUI_o *v5; // x20
  float FADEOUT_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C5456E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_LogoMain_EndFadeout__);
    sub_1C3E564(&LogoMain_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5456E = 1;
  }
  this->fields.status = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = LogoMain_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v4 = LogoMain_TypeInfo;
  }
  FADEOUT_TIME = v4->static_fields->FADEOUT_TIME;
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_LogoMain_EndFadeout__, 0);
  if ( !v5 )
    sub_1C3E7C0(v8, v9);
  CommonUI__maskFadeout(v5, 2, FADEOUT_TIME, v7, 0);
}


void LogoMain__Init(LogoMain_o *this, PlayMakerFSM_o *fsm, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  this->fields.fsm = fsm;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)fsm, (int32_t)method, v3);
  this->fields.callbackFunc = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
  LogoMain__Init_37721060(this, v7);
}


void LogoMain__Init_37721060(LogoMain_o *this, const MethodInfo *method)
{
  LogoMain_c *v3; // x0
  ManagerConfig_c *v4; // x0
  LogoMain_c *v5; // x8
  System_String_o *AppVer; // x21
  System_String_o *String; // x0
  LogoMain_c *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Transform_o *transform; // x20
  int32_t layer; // w0
  const MethodInfo *v14; // x3
  struct UnityEngine_GameObject_array *logoList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v17; // w20
  System_Collections_IEnumerator_o *progressBarCRW; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_IEnumerator_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C5456A & 1) == 0 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C3E564(&StringLiteral_22288/*"none"*/);
    sub_1C3E564(&StringLiteral_6598/*"FadeinFirst"*/);
    byte_4C5456A = 1;
  }
  v3 = LogoMain_TypeInfo;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v3 = LogoMain_TypeInfo;
  }
  v3->static_fields->isPlayLogo = 0;
  if ( !byte_4C54621 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    v3 = LogoMain_TypeInfo;
    byte_4C54621 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = LogoMain_TypeInfo;
  }
  v3->static_fields->_isPlaying_k__BackingField = 1;
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ManagerConfig_TypeInfo;
    }
    v5 = LogoMain_TypeInfo;
    AppVer = v4->static_fields->AppVer;
    if ( !LogoMain_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
      v5 = LogoMain_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(v5->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_22288/*"none"*/, 0);
    if ( System_String__op_Inequality(String, AppVer, 0) )
    {
      v8 = LogoMain_TypeInfo;
      if ( !LogoMain_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        v8 = LogoMain_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v8->static_fields->SAVE_KEY, AppVer, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_46;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_46;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_46;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_46;
    layer = UnityEngine_GameObject__get_layer(gameObject, 0);
    LogoMain__SetChildInit(this, transform, layer, v14);
  }
  logoList = this->fields.logoList;
  if ( !logoList )
    goto LABEL_46;
  max_length = logoList->max_length;
  if ( max_length )
  {
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)max_length )
          sub_1C3E7C8(gameObject, v10);
        gameObject = logoList->m_Items[v17];
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        logoList = this->fields.logoList;
        if ( !logoList )
          break;
        LODWORD(max_length) = logoList->max_length;
        if ( (int)++v17 >= (int)max_length )
          goto LABEL_37;
      }
LABEL_46:
      sub_1C3E7C0(gameObject, v10);
    }
LABEL_37:
    this->fields.index = 0;
    this->fields.status = 4;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6598/*"FadeinFirst"*/,
      0.1,
      0);
  }
  else
  {
    LogoMain__EndLogo(this, v10);
  }
  progressBarCRW = this->fields.progressBarCRW;
  if ( progressBarCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, progressBarCRW, 0);
    this->fields.progressBarCRW = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressBarCRW, 0, v19, v20);
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_46;
  if ( AssetManager__GetDownloadSize((AssetManager_o *)gameObject, 0) < 1 )
  {
    gameObject = this->fields.miniProgressBarBase;
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  else
  {
    v21 = LogoMain__ProgressBarCR(this, v10);
    this->fields.progressBarCRW = v21;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressBarCRW, (int32_t)v21, v22, v23);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136(
      (UnityEngine_MonoBehaviour_o *)this,
      this->fields.progressBarCRW,
      0);
  }
}


void LogoMain__Init_37721924(LogoMain_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  this->fields.fsm = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fsm, 0, (int32_t)method, v3);
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
  LogoMain__Init_37721060(this, v8);
}


bool LogoMain__IsPLayLogo(const MethodInfo *method)
{
  LogoMain_c *v1; // x0
  ManagerConfig_c *v2; // x0
  LogoMain_c *v4; // x8
  System_String_o *AppVer; // x19
  System_String_o *String; // x0

  if ( (byte_4C54569 & 1) == 0 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&StringLiteral_22288/*"none"*/);
    byte_4C54569 = 1;
  }
  v1 = LogoMain_TypeInfo;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v1 = LogoMain_TypeInfo;
  }
  if ( !v1->static_fields->isPlayLogo )
    return 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ManagerConfig_TypeInfo;
  }
  v4 = LogoMain_TypeInfo;
  AppVer = v2->static_fields->AppVer;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v4 = LogoMain_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_22288/*"none"*/, 0);
  return System_String__op_Inequality(String, AppVer, 0);
}


void LogoMain__OnClick(LogoMain_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *LogoMain__ProgressBarCR(LogoMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C54572 & 1) == 0 )
  {
    sub_1C3E564(&LogoMain__ProgressBarCR_d__33_TypeInfo);
    byte_4C54572 = 1;
  }
  v3 = sub_1C3E7B0(LogoMain__ProgressBarCR_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void LogoMain__Quit(LogoMain_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  this->fields.status = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void LogoMain__SetChildInit(LogoMain_o *this, UnityEngine_Transform_o *tf, int32_t layer, const MethodInfo *method)
{
  LogoMain_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4C54571 & 1) == 0 )
  {
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    this = (LogoMain_o *)sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C54571 = 1;
  }
  if ( !tf || (this = (LogoMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
LABEL_35:
    sub_1C3E7C0(this, tf);
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0) != layer )
  {
    this = (LogoMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
    Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
    if ( !Enumerator )
      sub_1C3E7C0(0, v7);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_12;
        }
        v12 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_12:
        v12 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
              Enumerator,
              *(_QWORD *)(v12 + 8))
          & 1) == 0 )
        break;
      v13 = Enumerator->klass;
      v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
        while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          v15 += 2;
          if ( !v14 )
            goto LABEL_19;
        }
        v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
      }
      else
      {
LABEL_19:
        v16 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                         Enumerator,
                                         *(_QWORD *)(v16 + 8));
      if ( v17 )
      {
        naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
        if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1C3EA80(v17);
          goto LABEL_35;
        }
      }
      LogoMain__SetChildInit(v6, v17, layer, v18);
    }
    v20 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
    if ( v20 )
    {
      v21 = *(_QWORD *)v20;
      v22 = v20;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_30;
        }
        v25 = v21 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_30:
        v25 = sub_1C8ED7C(v20, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
    }
  }
}


bool LogoMain__get_isPlaying(const MethodInfo *method)
{
  LogoMain_c *v1; // x0

  if ( (byte_4C54567 & 1) == 0 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    byte_4C54567 = 1;
  }
  v1 = LogoMain_TypeInfo;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v1 = LogoMain_TypeInfo;
  }
  return v1->static_fields->_isPlaying_k__BackingField;
}


void LogoMain__set_isPlaying(bool value, const MethodInfo *method)
{
  LogoMain_c *v3; // x0

  if ( (byte_4C54568 & 1) == 0 )
  {
    sub_1C3E564(&LogoMain_TypeInfo);
    byte_4C54568 = 1;
  }
  v3 = LogoMain_TypeInfo;
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
    v3 = LogoMain_TypeInfo;
  }
  v3->static_fields->_isPlaying_k__BackingField = value;
}


void LogoMain__ProgressBarCR_d__33___ctor(
        LogoMain__ProgressBarCR_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool LogoMain__ProgressBarCR_d__33__MoveNext(LogoMain__ProgressBarCR_d__33_o *this, const MethodInfo *method)
{
  LogoMain__ProgressBarCR_d__33_o *v2; // x19
  struct LogoMain_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  UILabel_o *miniProgressBarLabel; // x20
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w8
  int64_t DownloadSize; // x0
  float sliderValue_5__2; // s1
  float v16; // s0
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_WaitForSeconds_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  int64_t v24; // x0
  __int64 v25; // x20
  UnityEngine_WaitForEndOfFrame_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_WaitForEndOfFrame_o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_WaitForSeconds_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  v2 = this;
  if ( (byte_4C54574 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (LogoMain__ProgressBarCR_d__33_o *)sub_1C3E564(&StringLiteral_3792/*"CONNECT_LOAD_MESSAGE3"*/);
    byte_4C54574 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields._sliderValue_5__2 = 0.0;
      v2->fields.__1__state = -1;
      v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
      v2->fields.__2__current = (Il2CppObject *)v4;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      this = (LogoMain__ProgressBarCR_d__33_o *)_4__this->fields.miniProgressBarBase;
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (LogoMain__ProgressBarCR_d__33_o *)_4__this->fields.miniProgressBarSlider;
      if ( !this )
        goto LABEL_40;
      UIProgressBar__set_value((UIProgressBar_o *)this, v2->fields._sliderValue_5__2, 0);
      miniProgressBarLabel = _4__this->fields.miniProgressBarLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (LogoMain__ProgressBarCR_d__33_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3792/*"CONNECT_LOAD_MESSAGE3"*/, 0);
      if ( !miniProgressBarLabel )
        goto LABEL_40;
      UILabel__set_text(miniProgressBarLabel, (System_String_o *)this, 0);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      v2->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v9, v11, v12);
      v13 = 2;
      goto LABEL_30;
    case 2:
      v2->fields.__1__state = -1;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      DownloadSize = AssetManager__getDownloadSize(0);
      v2->fields._allSize_5__3 = DownloadSize;
      if ( DownloadSize < 1 )
        return 0;
      goto LABEL_23;
    case 3:
      sliderValue_5__2 = v2->fields._sliderValue_5__2;
      v16 = (float)(1.0 - (float)((float)v2->fields._size_5__4 / (float)v2->fields._allSize_5__3)) * 0.99;
      v2->fields.__1__state = -1;
      if ( sliderValue_5__2 >= v16 )
        goto LABEL_20;
      if ( !_4__this )
        goto LABEL_40;
      this = (LogoMain__ProgressBarCR_d__33_o *)_4__this->fields.miniProgressBarSlider;
      v2->fields._sliderValue_5__2 = v16;
      if ( !this )
        goto LABEL_40;
      UIProgressBar__set_value((UIProgressBar_o *)this, v16, 0);
LABEL_20:
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0);
      v2->fields.__2__current = (Il2CppObject *)v17;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v17, v18, v19);
      v13 = 4;
      goto LABEL_30;
    case 4:
      v2->fields.__1__state = -1;
      v20 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v20, 0.1, 0);
      v2->fields.__2__current = (Il2CppObject *)v20;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v20, v21, v22);
      v23 = 5;
      goto LABEL_37;
    case 5:
      v2->fields.__1__state = -1;
LABEL_23:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v24 = AssetManager__getDownloadSize(0);
      v2->fields._size_5__4 = v24;
      v25 = v24;
      v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v26, 0);
      v2->fields.__2__current = (Il2CppObject *)v26;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v26, v27, v28);
      if ( v25 < 1 )
        v23 = 6;
      else
        v23 = 3;
      goto LABEL_37;
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      this = (LogoMain__ProgressBarCR_d__33_o *)_4__this->fields.miniProgressBarSlider;
      if ( !this )
        goto LABEL_40;
      UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
      v29 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v29, 0);
      v2->fields.__2__current = (Il2CppObject *)v29;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v29, v30, v31);
      v13 = 7;
LABEL_30:
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v13;
      return 1;
    case 7:
      v2->fields.__1__state = -1;
      v32 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v32, 0.1, 0);
      v2->fields.__2__current = (Il2CppObject *)v32;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v32, v33, v34);
      v23 = 8;
LABEL_37:
      v2->fields.__1__state = v23;
      return 1;
    case 8:
      v2->fields.__1__state = -1;
      if ( !_4__this || (this = (LogoMain__ProgressBarCR_d__33_o *)_4__this->fields.miniProgressBarBase) == 0 )
LABEL_40:
        sub_1C3E7C0(this, method);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *LogoMain__ProgressBarCR_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        LogoMain__ProgressBarCR_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn LogoMain__ProgressBarCR_d__33__System_Collections_IEnumerator_Reset(
        LogoMain__ProgressBarCR_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_LogoMain__ProgressBarCR_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *LogoMain__ProgressBarCR_d__33__System_Collections_IEnumerator_get_Current(
        LogoMain__ProgressBarCR_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void LogoMain__ProgressBarCR_d__33__System_IDisposable_Dispose(
        LogoMain__ProgressBarCR_d__33_o *this,
        const MethodInfo *method)
{
  ;
}