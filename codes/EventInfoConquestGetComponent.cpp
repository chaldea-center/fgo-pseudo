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

  if ( (byte_40FA0FC & 1) == 0 )
  {
    sub_B16FFC(&EventInfoConquestGetComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_20419, v8);
    byte_40FA0FC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoConquestGetComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20419;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20419;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v36; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v38; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  struct UISprite_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  TerminalPramsManager_c *v59; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x23
  int max_length; // w8
  unsigned int v62; // w24
  EventConquestInfo_o *v63; // x27
  __int64 v64; // x22
  int32_t getNum; // w8
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v85; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v87; // x21

  if ( (byte_40FA0FB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v8);
    sub_B16FFC(&EventInfoConquestGetComponent_TypeInfo, v9);
    sub_B16FFC(&GiftEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
    sub_B16FFC(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v18);
    sub_B16FFC(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_5581, v20);
    sub_B16FFC(&StringLiteral_5582, v21);
    byte_40FA0FB = 1;
  }
  v22 = sub_B170CC(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, callback, method, v3, v4);
  EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
    (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_42;
  *(_QWORD *)(v22 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v22 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 48), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_41;
  v36 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  if ( !v36->static_fields->eventConquestInfos )
    goto LABEL_41;
  backSprite = this->fields.backSprite;
  v38 = EventInfoConquestGetComponent_TypeInfo;
  if ( (BYTE3(EventInfoConquestGetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v38 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v38->static_fields->EVENT_CONQUEST_GET_BG;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(backSprite, EVENT_CONQUEST_GET_BG, 0LL);
  v40 = this->fields.backSprite;
  if ( !v40 )
    goto LABEL_42;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v40->klass->vtable._33_MakePixelPerfect.method)(
    v40,
    v40->klass->vtable._34_get_minWidth.methodPtr);
  v41 = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !v41 )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject(v41, 0LL);
  if ( !gameObject )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v22 + 24) = v47;
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v22 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)v47, v49, v50, v51, v52, v53, v54);
  v59 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v59 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v59->static_fields->eventConquestInfos;
  if ( !eventConquestInfos )
    goto LABEL_42;
  max_length = eventConquestInfos->max_length;
  if ( max_length >= 1 )
  {
    v62 = 0;
    while ( 1 )
    {
      if ( v62 >= max_length )
      {
        sub_B17100(v59, v55, v56);
        sub_B170A0();
      }
      v63 = eventConquestInfos->m_Items[v62];
      v64 = sub_B170CC(GiftEntity_TypeInfo, v55, v56, v57, v58);
      GiftEntity___ctor((GiftEntity_o *)v64, 0LL);
      if ( !v64 )
        break;
      *(_DWORD *)(v64 + 16) = 0;
      if ( !v63 )
        break;
      *(_DWORD *)(v64 + 20) = v63->fields.type;
      *(_DWORD *)(v64 + 24) = v63->fields.objectId;
      getNum = v63->fields.getNum;
      *(_QWORD *)(v64 + 32) = 0LL;
      *(_DWORD *)(v64 + 28) = getNum;
      if ( !*v48 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v48,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
      max_length = eventConquestInfos->max_length;
      if ( (int)++v62 >= max_length )
        goto LABEL_32;
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_32:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5582, 0LL);
  *(_QWORD *)(v22 + 32) = v66;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 32), v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5581, 0LL);
  *(_QWORD *)(v22 + 40) = v73;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 40), v73, v74, v75, v76, v77, v78, v79);
  if ( *(_QWORD *)(v22 + 40) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v85 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v85 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v85->static_fields->DEFAULT_FADE_TIME;
    v87 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v80, v81, v82, v83);
    System_Action___ctor(
      v87,
      (Il2CppObject *)v22,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v87, 0LL);
  }
  else
  {
LABEL_41:
    ActionExtensions__Call(*(System_Action_o **)(v22 + 48), 0LL);
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
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x0
  EventConquestGetDialog_o *dialog; // x20
  WarBoardUiData_SaveData_array *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v15; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F6FC7 & 1) == 0 )
  {
    sub_B16FFC(&EventConquestGetDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_B16FFC(&SeManager_TypeInfo, v4);
    sub_B16FFC(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__, v5);
    byte_40F6FC7 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(29, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  giftList = this->fields.giftList;
  if ( !giftList )
    goto LABEL_12;
  dialog = _4__this->fields.dialog;
  v9 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)giftList,
         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v15 = (GiftEntity_array *)v9;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_B170CC(
                                                        EventConquestGetDialog_ClickDelegate_TypeInfo,
                                                        v10,
                                                        v11,
                                                        v12,
                                                        v13);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !dialog )
LABEL_12:
    sub_B170D4();
  EventConquestGetDialog__Open(dialog, v15, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F6FC8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__, v6);
    byte_40F6FC8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !dialog )
LABEL_8:
    sub_B170D4();
  EventConquestGetDialog__Close_29403092(dialog, _9__2, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F6FC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__, v5);
    byte_40F6FC9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__3(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  UnityEngine_Component_o *backSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (backSprite = (UnityEngine_Component_o *)_4__this->fields.backSprite) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(backSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}