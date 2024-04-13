void __fastcall EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E94AD & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoConquestGetComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_20765/*"military_production_bg"*/, v8, v9, v10);
    byte_42E94AD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoConquestGetComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_20765/*"military_production_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20765/*"military_production_bg"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  __int64 v51; // x19
  UnityEngine_Component_o *gameObject; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v67; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v69; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x22
  void **v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x23
  int v80; // w8
  unsigned int v81; // w24
  _DWORD *v82; // x27
  __int64 v83; // x22
  int v84; // w8
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v100; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v102; // x21
  __int64 v103; // x0

  if ( (byte_42E94AC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&EventInfoConquestGetComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&GiftEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v39, v40, v41);
    sub_B5D5C4(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_5673/*"EVENT_CONQUEST_GET_MESSAGE"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_5674/*"EVENT_CONQUEST_GET_TITLE"*/, v48, v49, v50);
    byte_42E94AC = 1;
  }
  v51 = sub_B5D694(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
    (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)v51,
    0LL);
  if ( !v51 )
    goto LABEL_42;
  *(_QWORD *)(v51 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 16), (System_Int32_array **)this, v54, v55, v56, v57, v58, v59);
  *(_QWORD *)(v51 + 48) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 48), (System_Int32_array **)callback, v60, v61, v62, v63, v64, v65);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_41;
  v67 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  if ( !v67->static_fields->eventConquestInfos )
    goto LABEL_41;
  backSprite = this->fields.backSprite;
  v69 = EventInfoConquestGetComponent_TypeInfo;
  if ( (BYTE3(EventInfoConquestGetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v69 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v69->static_fields->EVENT_CONQUEST_GET_BG;
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
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v51 + 24) = v71;
  v72 = (void **)(v51 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 24), (System_Int32_array **)v71, v73, v74, v75, v76, v77, v78);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v79 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 632LL);
  if ( !v79 )
    goto LABEL_42;
  v80 = *(_DWORD *)(v79 + 24);
  if ( v80 >= 1 )
  {
    v81 = 0;
    while ( 1 )
    {
      if ( v81 >= v80 )
      {
        v103 = sub_B5D6C8(gameObject);
        sub_B5D668(v103, 0LL);
      }
      v82 = *(_DWORD **)(v79 + 8LL * (int)v81 + 32);
      v83 = sub_B5D694(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v83, 0LL);
      if ( !v83 )
        break;
      *(_DWORD *)(v83 + 16) = 0;
      if ( !v82 )
        break;
      *(_DWORD *)(v83 + 20) = v82[4];
      *(_DWORD *)(v83 + 24) = v82[5];
      v84 = v82[7];
      *(_QWORD *)(v83 + 32) = 0LL;
      *(_DWORD *)(v83 + 28) = v84;
      gameObject = (UnityEngine_Component_o *)*v72;
      if ( !*v72 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
      v80 = *(_DWORD *)(v79 + 24);
      if ( (int)++v81 >= v80 )
        goto LABEL_32;
    }
LABEL_42:
    sub_B5D69C(gameObject, v53);
  }
LABEL_32:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v85 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5674/*"EVENT_CONQUEST_GET_TITLE"*/, 0LL);
  *(_QWORD *)(v51 + 32) = v85;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 32), v85, v86, v87, v88, v89, v90, v91);
  v92 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5673/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0LL);
  *(_QWORD *)(v51 + 40) = v92;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 40), v92, v93, v94, v95, v96, v97, v98);
  if ( *(_QWORD *)(v51 + 40) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v100 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v100 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v100->static_fields->DEFAULT_FADE_TIME;
    v102 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v102,
      (Il2CppObject *)v51,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v102, 0LL);
  }
  else
  {
LABEL_41:
    ActionExtensions__Call(*(System_Action_o **)(v51 + 48), 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *giftList; // x0
  __int64 v15; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  struct EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v19; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  __int64 v22; // x9

  if ( (byte_42E652D & 1) == 0 )
  {
    sub_B5D5C4(&EventConquestGetDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__, v11, v12, v13);
    byte_42E652D = 1;
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
                                                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v19 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (struct EventConquestGetDialog_ClickDelegate_o *)sub_B5D694(EventConquestGetDialog_ClickDelegate_TypeInfo);
    v22 = *(_QWORD *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v22;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B5D560(&_9__1->fields.method);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !dialog )
LABEL_12:
    sub_B5D69C(giftList, v15);
  EventConquestGetDialog__Open(dialog, v19, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  EventConquestGetDialog_o *data; // x20
  System_Action_o *v10; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E652E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_B5D5C4(
                                                                     &Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
                                                                     v5,
                                                                     v6,
                                                                     v7);
    byte_42E652E = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_8;
  data = (EventConquestGetDialog_o *)klass->_1.byval_arg.data;
  v10 = (System_Action_o *)v4[4].klass;
  if ( !v10 )
  {
    v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v10, v4, Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__, 0LL);
    v4[4].klass = (Il2CppClass *)v10;
    sub_B5D560(&v4[4]);
  }
  if ( !data )
LABEL_8:
    sub_B5D69C(this, method);
  EventConquestGetDialog__Close_29812864(data, v10, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21

  if ( (byte_42E652F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__, v11, v12, v13);
    byte_42E652F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  if ( !v16 )
    sub_B5D69C(Instance, v15);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, _9__3, 0LL);
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
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}