void LogoMain___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct LogoMain_StaticFields *static_fields; // x0

  if ( (byte_596DEAB & 1) == 0 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    sub_2213A60(&StringLiteral_8861/*"LogoPlay"*/);
    byte_596DEAB = 1;
  }
  v7 = StringLiteral_8861/*"LogoPlay"*/;
  static_fields = LogoMain_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FADEIN_TIME = 0x3F0000003F000000LL;
  static_fields->FADEWAIT_TIME = 1.0;
  static_fields->SAVE_KEY = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY, v7, v1, v2, v3, v4, v5, v6);
  LogoMain_TypeInfo->static_fields->isPlayLogo = 1;
}


void LogoMain___ctor(LogoMain_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LogoMain__EndFadein(LogoMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  LogoMain_c *v4; // x0
  int v5; // w8

  if ( (byte_596DEA5 & 1) == 0 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    sub_2213A60(&StringLiteral_6884/*"Fadeout"*/);
    byte_596DEA5 = 1;
  }
  v4 = LogoMain_TypeInfo;
  v5 = *(&LogoMain_TypeInfo->_2.cctor_finished + 1);
  this->fields.status = 2;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = LogoMain_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6884/*"Fadeout"*/,
    v4->static_fields->FADEWAIT_TIME,
    0);
}


void LogoMain__EndFadeout(LogoMain_o *this, const MethodInfo *method)
{
  LogoMain_o *v2; // x19
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 index; // x9
  System_String_o *v5; // x1
  int v6; // w8

  v2 = this;
  if ( (byte_596DEA7 & 1) == 0 )
  {
    this = (LogoMain_o *)sub_2213A60(&StringLiteral_6882/*"Fadein"*/);
    byte_596DEA7 = 1;
  }
  logoList = v2->fields.logoList;
  if ( !logoList )
    goto LABEL_7;
  index = v2->fields.index;
  if ( (unsigned int)index >= LODWORD(logoList->max_length) )
    sub_2213CE4(this);
  this = (LogoMain_o *)logoList->m_Items[index];
  if ( !this )
LABEL_7:
    sub_2213CDC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v5 = (System_String_o *)StringLiteral_6882/*"Fadein"*/;
  v6 = v2->fields.index + 1;
  v2->fields.status = 4;
  v2->fields.index = v6;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, v5, 0.2, 0);
}


void LogoMain__EndLogo(LogoMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *v4; // x0
  intptr_t m_CachedPtr; // x9
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 v7; // x21
  int max_length; // w9
  UnityEngine_Object_o *fsm; // x20
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_596DEA8 & 1) == 0 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5645/*"END_LOGO"*/);
    byte_596DEA8 = 1;
  }
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, method, v2);
  if ( !byte_596DF56 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    byte_596DF56 = 1;
  }
  v4 = (UnityEngine_GameObject_o *)LogoMain_TypeInfo;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, method, v2);
    v4 = (UnityEngine_GameObject_o *)LogoMain_TypeInfo;
  }
  m_CachedPtr = v4[7].fields.m_CachedPtr;
  logoList = this->fields.logoList;
  this->fields.status = 0;
  *(_BYTE *)(m_CachedPtr + 25) = 0;
  if ( !logoList )
    goto LABEL_15;
  v7 = 0;
  while ( 1 )
  {
    max_length = logoList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_2213CE4(v4);
    v4 = logoList->m_Items[v7];
    if ( v4 )
    {
      UnityEngine_GameObject__SetActive(v4, 0, 0);
      logoList = this->fields.logoList;
      ++v7;
      if ( logoList )
        continue;
    }
    goto LABEL_15;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    v4 = (UnityEngine_GameObject_o *)this->fields.fsm;
    if ( v4 )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v4, (System_String_o *)StringLiteral_5645/*"END_LOGO"*/, 0);
      goto LABEL_21;
    }
LABEL_15:
    sub_2213CDC(v4, method);
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  LogoMain_c *v9; // x8
  float FADEIN_TIME; // s8
  System_Action_o *v11; // x21

  v2 = this;
  if ( (byte_596DEA4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_LogoMain_EndFadein__);
    sub_2213A60(&LogoMain_TypeInfo);
    this = (LogoMain_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DEA4 = 1;
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
      sub_2213CE4(this);
    this = (LogoMain_o *)logoList->m_Items[index];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = LogoMain_TypeInfo;
      if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v6, v7);
        v9 = LogoMain_TypeInfo;
      }
      FADEIN_TIME = v9->static_fields->FADEIN_TIME;
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v2, Method_LogoMain_EndFadein__, 0);
      if ( Instance )
      {
        CommonUI__maskFadein((CommonUI_o *)Instance, FADEIN_TIME, v11, 0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(this, method);
  }
  LogoMain__EndLogo(v2, method);
}


void LogoMain__FadeinFirst(LogoMain_o *this, const MethodInfo *method)
{
  LogoMain_o *v2; // x19
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 index; // x9
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  LogoMain_c *v8; // x8
  CommonUI_o *v9; // x20
  float FADEIN_TIME; // s8
  System_Action_o *v11; // x21

  v2 = this;
  if ( (byte_596DEA3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_LogoMain_EndFadein__);
    sub_2213A60(&LogoMain_TypeInfo);
    this = (LogoMain_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DEA3 = 1;
  }
  logoList = v2->fields.logoList;
  if ( !logoList )
    goto LABEL_10;
  index = v2->fields.index;
  if ( (unsigned int)index >= LODWORD(logoList->max_length) )
    sub_2213CE4(this);
  this = (LogoMain_o *)logoList->m_Items[index];
  if ( !this )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = LogoMain_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v6, v7);
    v8 = LogoMain_TypeInfo;
  }
  FADEIN_TIME = v8->static_fields->FADEIN_TIME;
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v2, Method_LogoMain_EndFadein__, 0);
  if ( !v9 )
LABEL_10:
    sub_2213CDC(this, method);
  CommonUI__maskFadein(v9, FADEIN_TIME, v11, 0);
}


void LogoMain__Fadeout(LogoMain_o *this, const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  LogoMain_c *v7; // x8
  CommonUI_o *v8; // x20
  float FADEOUT_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596DEA6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_LogoMain_EndFadeout__);
    sub_2213A60(&LogoMain_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596DEA6 = 1;
  }
  v3 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.status = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance(v3);
  v7 = LogoMain_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v5, v6);
    v7 = LogoMain_TypeInfo;
  }
  FADEOUT_TIME = v7->static_fields->FADEOUT_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_LogoMain_EndFadeout__, 0);
  if ( !v8 )
    sub_2213CDC(v11, v12);
  CommonUI__maskFadeout(v8, 2, FADEOUT_TIME, v10, 0);
}


void LogoMain__Init(LogoMain_o *this, PlayMakerFSM_o *fsm, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1

  this->fields.fsm = fsm;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fsm,
    (int32_t)fsm,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
  LogoMain__Init_44502832(this, v15);
}


void LogoMain__Init_44502832(LogoMain_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  LogoMain_c *v4; // x0
  int v5; // w9
  ManagerConfig_c *v6; // x8
  int v7; // w10
  struct ManagerConfig_StaticFields *static_fields; // x9
  LogoMain_c *v9; // x0
  System_String_o *AppVer; // x21
  System_String_o *String; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  LogoMain_c *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Transform_o *transform; // x20
  int32_t layer; // w0
  const MethodInfo *v22; // x3
  struct UnityEngine_GameObject_array *logoList; // x8
  __int64 v24; // x21
  int max_length; // w9
  System_String_o *v26; // x1
  System_Collections_IEnumerator_o *progressBarCRW; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Collections_IEnumerator_o *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_596DEA2 & 1) == 0 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_2213A60(&StringLiteral_23396/*"none"*/);
    sub_2213A60(&StringLiteral_6883/*"FadeinFirst"*/);
    byte_596DEA2 = 1;
  }
  v4 = LogoMain_TypeInfo;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, method, v2);
    v4 = LogoMain_TypeInfo;
  }
  v5 = (unsigned __int8)byte_596DF56;
  v4->static_fields->isPlayLogo = 0;
  if ( !v5 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    v4 = LogoMain_TypeInfo;
    byte_596DF56 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = LogoMain_TypeInfo;
  }
  v6 = ManagerConfig_TypeInfo;
  v7 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v4->static_fields->_isPlaying_k__BackingField = 1;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v6, method, v2);
    v6 = ManagerConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( !static_fields->UseMock )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, method, v2);
      static_fields = ManagerConfig_TypeInfo->static_fields;
    }
    v9 = LogoMain_TypeInfo;
    AppVer = static_fields->AppVer;
    if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, method, v2);
      v9 = LogoMain_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(v9->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_23396/*"none"*/, 0);
    if ( System_String__op_Inequality(String, AppVer, 0) )
    {
      v14 = LogoMain_TypeInfo;
      if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v12, v13);
        v14 = LogoMain_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(v14->static_fields->SAVE_KEY, AppVer, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_36;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_36;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_36;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_36;
    layer = UnityEngine_GameObject__get_layer(gameObject, 0);
    LogoMain__SetChildInit(this, transform, layer, v22);
  }
  logoList = this->fields.logoList;
  if ( !logoList )
    goto LABEL_36;
  if ( logoList->max_length )
  {
    v24 = 0;
    while ( 1 )
    {
      max_length = logoList->max_length;
      if ( (int)v24 >= max_length )
        break;
      if ( (unsigned int)v24 >= max_length )
        sub_2213CE4(gameObject);
      gameObject = logoList->m_Items[v24];
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        logoList = this->fields.logoList;
        ++v24;
        if ( logoList )
          continue;
      }
      goto LABEL_36;
    }
    v26 = (System_String_o *)StringLiteral_6883/*"FadeinFirst"*/;
    this->fields.status = 4;
    this->fields.index = 0;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v26, 0.1, 0);
  }
  else
  {
    LogoMain__EndLogo(this, v16);
  }
  progressBarCRW = this->fields.progressBarCRW;
  if ( progressBarCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, progressBarCRW, 0);
    this->fields.progressBarCRW = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progressBarCRW, 0, v28, v29, v30, v31, v32, v33);
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_36;
  if ( AssetManager__GetDownloadSize((AssetManager_o *)gameObject, 0) >= 1 )
  {
    v34 = LogoMain__ProgressBarCR(this, v16);
    this->fields.progressBarCRW = v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.progressBarCRW,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756(
      (UnityEngine_MonoBehaviour_o *)this,
      this->fields.progressBarCRW,
      0);
    return;
  }
  gameObject = this->fields.miniProgressBarBase;
  if ( !gameObject )
LABEL_36:
    sub_2213CDC(gameObject, v16);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void LogoMain__Init_44503692(LogoMain_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1

  this->fields.fsm = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  LogoMain__Init_44502832(this, v16);
}


bool LogoMain__IsPLayLogo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  LogoMain_c *v3; // x0
  ManagerConfig_c *v4; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  LogoMain_c *v7; // x0
  System_String_o *AppVer; // x19
  System_String_o *String; // x0

  if ( (byte_596DEA1 & 1) == 0 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&StringLiteral_23396/*"none"*/);
    byte_596DEA1 = 1;
  }
  v3 = LogoMain_TypeInfo;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v1, v2);
    v3 = LogoMain_TypeInfo;
  }
  if ( !v3->static_fields->isPlayLogo )
    return 0;
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v4 = ManagerConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->UseMock )
    return 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1, v2);
    static_fields = ManagerConfig_TypeInfo->static_fields;
  }
  v7 = LogoMain_TypeInfo;
  AppVer = static_fields->AppVer;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v1, v2);
    v7 = LogoMain_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v7->static_fields->SAVE_KEY, (System_String_o *)StringLiteral_23396/*"none"*/, 0);
  return System_String__op_Inequality(String, AppVer, 0);
}


void LogoMain__OnClick(LogoMain_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *LogoMain__ProgressBarCR(LogoMain_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596DEAA & 1) == 0 )
  {
    sub_2213A60(&LogoMain__ProgressBarCR_d__33_TypeInfo);
    byte_596DEAA = 1;
  }
  v3 = sub_2213CCC(LogoMain__ProgressBarCR_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void LogoMain__Quit(LogoMain_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  this->fields.status = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void LogoMain__SetChildInit(LogoMain_o *this, UnityEngine_Transform_o *tf, int32_t layer, const MethodInfo *method)
{
  LogoMain_o *v6; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 naturalAligment; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_o *v27; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_596DEA9 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (LogoMain_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596DEA9 = 1;
  }
  if ( !tf )
    goto LABEL_37;
  this = (LogoMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
  if ( !this )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0) == layer )
    return;
  this = (LogoMain_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0);
  if ( !this )
LABEL_37:
    sub_2213CDC(this, tf);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  v27 = Enumerator;
  while ( 1 )
  {
    if ( !v27 )
      goto LABEL_36;
    klass = v27->klass;
    v10 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_13;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v12 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v27, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v27->klass;
    v14 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_20;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_20:
      v16 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v27,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_221405C(v17, UnityEngine_Transform_TypeInfo, v18, v19);
LABEL_36:
        sub_2213CDC(Enumerator, v8);
      }
    }
    LogoMain__SetChildInit(v6, v17, layer, v19);
  }
  v21 = sub_2213BB4(v27, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_31;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_31:
      v26 = sub_224BC3C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


bool LogoMain__get_isPlaying(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  LogoMain_c *v3; // x0

  if ( (byte_596DE9F & 1) == 0 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    byte_596DE9F = 1;
  }
  v3 = LogoMain_TypeInfo;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v1, v2);
    v3 = LogoMain_TypeInfo;
  }
  return v3->static_fields->_isPlaying_k__BackingField;
}


void LogoMain__set_isPlaying(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  LogoMain_c *v4; // x0

  if ( (byte_596DEA0 & 1) == 0 )
  {
    sub_2213A60(&LogoMain_TypeInfo);
    byte_596DEA0 = 1;
  }
  v4 = LogoMain_TypeInfo;
  if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, method, v2);
    v4 = LogoMain_TypeInfo;
  }
  v4->static_fields->_isPlaying_k__BackingField = value;
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
  __int64 v2; // x2
  int32_t _1__state; // w8
  struct LogoMain_o *_4__this; // x20
  System_String_o *miniProgressBarBase; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *miniProgressBarLabel; // x20
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int v18; // w8
  float v19; // s0
  float v20; // s0
  UnityEngine_WaitForEndOfFrame_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_WaitForEndOfFrame_o *v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x0
  __int64 DownloadSize; // x20
  UnityEngine_WaitForEndOfFrame_o *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w8
  UnityEngine_WaitForEndOfFrame_o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  UnityEngine_WaitForSeconds_o *v52; // x20
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  UnityEngine_WaitForSeconds_o *v59; // x20
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7

  if ( (byte_596DEAC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_3936/*"CONNECT_LOAD_MESSAGE3"*/);
    byte_596DEAC = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  miniProgressBarBase = 0;
  if ( _1__state > 3 )
  {
    if ( _1__state > 5 )
    {
      if ( _1__state != 6 )
      {
        if ( _1__state != 7 )
        {
          if ( _1__state != 8 )
            return (char)miniProgressBarBase;
          this->fields.__1__state = -1;
          if ( _4__this )
          {
            miniProgressBarBase = (System_String_o *)_4__this->fields.miniProgressBarBase;
            if ( miniProgressBarBase )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniProgressBarBase, 0, 0);
LABEL_37:
              LOBYTE(miniProgressBarBase) = 0;
              return (char)miniProgressBarBase;
            }
          }
LABEL_48:
          sub_2213CDC(miniProgressBarBase, method);
        }
        this->fields.__1__state = -1;
        v59 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v59, 0.1, 0);
        this->fields.__2__current = (Il2CppObject *)v59;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
          (int32_t)v59,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
        v44 = 8;
        goto LABEL_45;
      }
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_48;
      miniProgressBarBase = (System_String_o *)_4__this->fields.miniProgressBarSlider;
      if ( !miniProgressBarBase )
        goto LABEL_48;
      UIProgressBar__set_value((UIProgressBar_o *)miniProgressBarBase, 1.0, 0);
      v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v45, 0);
      this->fields.__2__current = (Il2CppObject *)v45;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v45, v46, v47, v48, v49, v50, v51);
      v18 = 7;
LABEL_41:
      *((_DWORD *)p__2__current - 2) = v18;
LABEL_46:
      LOBYTE(miniProgressBarBase) = 1;
      return (char)miniProgressBarBase;
    }
    if ( _1__state == 4 )
    {
      this->fields.__1__state = -1;
      v52 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v52, 0.1, 0);
      this->fields.__2__current = (Il2CppObject *)v52;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      v44 = 5;
LABEL_45:
      this->fields.__1__state = v44;
      goto LABEL_46;
    }
    this->fields.__1__state = -1;
LABEL_33:
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    DownloadSize = AssetManager__getDownloadSize(0);
    this->fields._size_5__4 = DownloadSize;
    v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v37, 0);
    this->fields.__2__current = (Il2CppObject *)v37;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    if ( DownloadSize < 1 )
      v44 = 6;
    else
      v44 = 3;
    goto LABEL_45;
  }
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      v19 = 1.0 - (float)((float)this->fields._size_5__4 / (float)this->fields._allSize_5__3);
      this->fields.__1__state = -1;
      v20 = v19 * 0.99;
      if ( this->fields._sliderValue_5__2 < v20 )
      {
        if ( !_4__this )
          goto LABEL_48;
        miniProgressBarBase = (System_String_o *)_4__this->fields.miniProgressBarSlider;
        this->fields._sliderValue_5__2 = v20;
        if ( !miniProgressBarBase )
          goto LABEL_48;
        UIProgressBar__set_value((UIProgressBar_o *)miniProgressBarBase, v20, 0);
      }
      v21 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v21, 0);
      this->fields.__2__current = (Il2CppObject *)v21;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v21, v22, v23, v24, v25, v26, v27);
      v18 = 4;
      goto LABEL_41;
    }
    this->fields.__1__state = -1;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    v35 = AssetManager__getDownloadSize(0);
    this->fields._allSize_5__3 = v35;
    if ( v35 < 1 )
      goto LABEL_37;
    goto LABEL_33;
  }
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return (char)miniProgressBarBase;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_48;
    miniProgressBarBase = (System_String_o *)_4__this->fields.miniProgressBarBase;
    if ( !miniProgressBarBase )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)miniProgressBarBase, 1, 0);
    miniProgressBarBase = (System_String_o *)_4__this->fields.miniProgressBarSlider;
    if ( !miniProgressBarBase )
      goto LABEL_48;
    UIProgressBar__set_value((UIProgressBar_o *)miniProgressBarBase, this->fields._sliderValue_5__2, 0);
    miniProgressBarLabel = _4__this->fields.miniProgressBarLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    miniProgressBarBase = LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"CONNECT_LOAD_MESSAGE3"*/, 0);
    if ( !miniProgressBarLabel )
      goto LABEL_48;
    UILabel__set_text(miniProgressBarLabel, miniProgressBarBase, 0);
    v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v10, 0);
    this->fields.__2__current = (Il2CppObject *)v10;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v10, v12, v13, v14, v15, v16, v17);
    v18 = 2;
    goto LABEL_41;
  }
  this->fields.__1__state = -1;
  this->fields._sliderValue_5__2 = 0.0;
  v28 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v28, 0);
  this->fields.__2__current = (Il2CppObject *)v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.__1__state = 1;
  LOBYTE(miniProgressBarBase) = 1;
  return (char)miniProgressBarBase;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_LogoMain__ProgressBarCR_d__33_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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