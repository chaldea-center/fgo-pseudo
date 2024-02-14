void __fastcall EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4215591 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoConquestGetComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_20565/*"military_production_bg"*/, v8);
    byte_4215591 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoConquestGetComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20565/*"military_production_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20565/*"military_production_bg"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventInfoConquestGetComponent___ctor(EventInfoConquestGetComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoConquestGetComponent__Open(
        EventInfoConquestGetComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x19
  UnityEngine_Component_o *gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v35; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v37; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x22
  void **v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x23
  int v52; // w8
  unsigned int v53; // w24
  _DWORD *v54; // x27
  __int64 v55; // x22
  int v56; // w8
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v74; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v76; // x21
  __int64 v77; // x0

  if ( (byte_4215590 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v6);
    sub_B0D8A4(&EventInfoConquestGetComponent_TypeInfo, v7);
    sub_B0D8A4(&GiftEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v15);
    sub_B0D8A4(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v16);
    sub_B0D8A4(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_5612/*"EVENT_CONQUEST_GET_MESSAGE"*/, v18);
    sub_B0D8A4(&StringLiteral_5613/*"EVENT_CONQUEST_GET_TITLE"*/, v19);
    byte_4215590 = 1;
  }
  v20 = sub_B0D974(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, callback, method);
  EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
    (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_42;
  *(_QWORD *)(v20 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v20 + 48) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 48), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_41;
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  if ( !v35->static_fields->eventConquestInfos )
    goto LABEL_41;
  backSprite = this->fields.backSprite;
  v37 = EventInfoConquestGetComponent_TypeInfo;
  if ( (BYTE3(EventInfoConquestGetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v37 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v37->static_fields->EVENT_CONQUEST_GET_BG;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(backSprite, EVENT_CONQUEST_GET_BG, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_42;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
    gameObject,
    gameObject->klass[2]._1.interopData);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_42;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v20 + 24) = v41;
  v42 = (void **)(v20 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)v41, v43, v44, v45, v46, v47, v48);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v51 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 608LL);
  if ( !v51 )
    goto LABEL_42;
  v52 = *(_DWORD *)(v51 + 24);
  if ( v52 >= 1 )
  {
    v53 = 0;
    while ( 1 )
    {
      if ( v53 >= v52 )
      {
        v77 = sub_B0D9A8(gameObject);
        sub_B0D948(v77, 0LL);
      }
      v54 = *(_DWORD **)(v51 + 8LL * (int)v53 + 32);
      v55 = sub_B0D974(GiftEntity_TypeInfo, v49, v50);
      GiftEntity___ctor((GiftEntity_o *)v55, 0LL);
      if ( !v55 )
        break;
      *(_DWORD *)(v55 + 16) = 0;
      if ( !v54 )
        break;
      *(_DWORD *)(v55 + 20) = v54[4];
      *(_DWORD *)(v55 + 24) = v54[5];
      v56 = v54[7];
      *(_QWORD *)(v55 + 32) = 0LL;
      *(_DWORD *)(v55 + 28) = v56;
      gameObject = (UnityEngine_Component_o *)*v42;
      if ( !*v42 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
      v52 = *(_DWORD *)(v51 + 24);
      if ( (int)++v53 >= v52 )
        goto LABEL_32;
    }
LABEL_42:
    sub_B0D97C(gameObject);
  }
LABEL_32:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v57 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5613/*"EVENT_CONQUEST_GET_TITLE"*/, 0LL);
  *(_QWORD *)(v20 + 32) = v57;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), v57, v58, v59, v60, v61, v62, v63);
  v64 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5612/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0LL);
  *(_QWORD *)(v20 + 40) = v64;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 40), v64, v65, v66, v67, v68, v69, v70);
  if ( *(_QWORD *)(v20 + 40) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v74 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v74 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v74->static_fields->DEFAULT_FADE_TIME;
    v76 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v71, v72);
    System_Action___ctor(
      v76,
      (Il2CppObject *)v20,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v76, 0LL);
  }
  else
  {
LABEL_41:
    ActionExtensions__Call(*(System_Action_o **)(v20 + 48), 0LL);
  }
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__0(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *giftList; // x0
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v12; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  __int64 v15; // x9

  if ( (byte_4211B59 & 1) == 0 )
  {
    sub_B0D8A4(&EventConquestGetDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    sub_B0D8A4(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__, v5);
    byte_4211B59 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(29, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  giftList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.giftList;
  if ( !giftList )
    goto LABEL_12;
  dialog = _4__this->fields.dialog;
  giftList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                             giftList,
                                                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v12 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (struct EventConquestGetDialog_ClickDelegate_o *)sub_B0D974(
                                                               EventConquestGetDialog_ClickDelegate_TypeInfo,
                                                               v9,
                                                               v10);
    v15 = *(_QWORD *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v15;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B0D840(&_9__1->fields.method, this);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !dialog )
LABEL_12:
    sub_B0D97C(giftList);
  EventConquestGetDialog__Open(dialog, v12, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  EventConquestGetDialog_o *data; // x20
  System_Action_o *v7; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4211B5A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_B0D8A4(
                                                                     &Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
                                                                     v4);
    byte_4211B5A = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_8;
  data = (EventConquestGetDialog_o *)klass->_1.byval_arg.data;
  v7 = (System_Action_o *)v3[4].klass;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v7, v3, Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__, 0LL);
    v3[4].klass = (Il2CppClass *)v7;
    sub_B0D840(&v3[4], v7);
  }
  if ( !data )
LABEL_8:
    sub_B0D97C(this);
  EventConquestGetDialog__Close_28879856(data, v7, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *v9; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21

  if ( (byte_4211B5B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__, v5);
    byte_4211B5B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B0D840(&this->fields.__9__3, _9__3);
  }
  if ( !v9 )
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__3(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)_4__this->fields.backSprite) == 0LL)
    || (this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
  {
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}