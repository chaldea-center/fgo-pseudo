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

  if ( (byte_418862B & 1) == 0 )
  {
    sub_B2C35C(&EventInfoConquestGetComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_20502/*"military_production_bg"*/, v8);
    byte_418862B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoConquestGetComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20502/*"military_production_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20502/*"military_production_bg"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v22; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x22
  void **v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x23
  int v49; // w8
  unsigned int v50; // w24
  _DWORD *v51; // x27
  __int64 v52; // x22
  int v53; // w8
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v69; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v71; // x21
  __int64 v72; // x0

  if ( (byte_418862A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v6);
    sub_B2C35C(&EventInfoConquestGetComponent_TypeInfo, v7);
    sub_B2C35C(&GiftEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    sub_B2C35C(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v16);
    sub_B2C35C(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_5596/*"EVENT_CONQUEST_GET_MESSAGE"*/, v18);
    sub_B2C35C(&StringLiteral_5597/*"EVENT_CONQUEST_GET_TITLE"*/, v19);
    byte_418862A = 1;
  }
  v20 = sub_B2C42C(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
    (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_42;
  *(_QWORD *)(v20 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 48) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 48), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
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
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v20 + 24) = v40;
  v41 = (void **)(v20 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)v40, v42, v43, v44, v45, v46, v47);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v48 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 608LL);
  if ( !v48 )
    goto LABEL_42;
  v49 = *(_DWORD *)(v48 + 24);
  if ( v49 >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= v49 )
      {
        v72 = sub_B2C460(gameObject);
        sub_B2C400(v72, 0LL);
      }
      v51 = *(_DWORD **)(v48 + 8LL * (int)v50 + 32);
      v52 = sub_B2C42C(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v52, 0LL);
      if ( !v52 )
        break;
      *(_DWORD *)(v52 + 16) = 0;
      if ( !v51 )
        break;
      *(_DWORD *)(v52 + 20) = v51[4];
      *(_DWORD *)(v52 + 24) = v51[5];
      v53 = v51[7];
      *(_QWORD *)(v52 + 32) = 0LL;
      *(_DWORD *)(v52 + 28) = v53;
      gameObject = (UnityEngine_Component_o *)*v41;
      if ( !*v41 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
      v49 = *(_DWORD *)(v48 + 24);
      if ( (int)++v50 >= v49 )
        goto LABEL_32;
    }
LABEL_42:
    sub_B2C434(gameObject, v22);
  }
LABEL_32:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v54 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EVENT_CONQUEST_GET_TITLE"*/, 0LL);
  *(_QWORD *)(v20 + 32) = v54;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), v54, v55, v56, v57, v58, v59, v60);
  v61 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0LL);
  *(_QWORD *)(v20 + 40) = v61;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 40), v61, v62, v63, v64, v65, v66, v67);
  if ( *(_QWORD *)(v20 + 40) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v69 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v69 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v69->static_fields->DEFAULT_FADE_TIME;
    v71 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v71,
      (Il2CppObject *)v20,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v71, 0LL);
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
  __int64 v7; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  struct EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v11; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  __int64 v14; // x9

  if ( (byte_4184AFA & 1) == 0 )
  {
    sub_B2C35C(&EventConquestGetDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_B2C35C(&SeManager_TypeInfo, v4);
    sub_B2C35C(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__, v5);
    byte_4184AFA = 1;
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
                                                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v11 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (struct EventConquestGetDialog_ClickDelegate_o *)sub_B2C42C(EventConquestGetDialog_ClickDelegate_TypeInfo);
    v14 = *(_QWORD *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v14;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B2C2F8(&_9__1->fields.method, this);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !dialog )
LABEL_12:
    sub_B2C434(giftList, v7);
  EventConquestGetDialog__Open(dialog, v11, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  EventConquestGetDialog_o *data; // x20
  System_Action_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4184AFB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_B2C35C(
                                                                     &Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
                                                                     v3);
    byte_4184AFB = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  data = (EventConquestGetDialog_o *)klass->_1.byval_arg.data;
  v6 = (System_Action_o *)v2[4].klass;
  if ( !v6 )
  {
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, v2, Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__, 0LL);
    v2[4].klass = (Il2CppClass *)v6;
    sub_B2C2F8(&v2[4], v6);
  }
  if ( !data )
LABEL_8:
    sub_B2C434(this, method);
  EventConquestGetDialog__Close_29714032(data, v6, 0LL);
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
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21

  if ( (byte_4184AFC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__, v5);
    byte_4184AFC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !v8 )
    sub_B2C434(Instance, v7);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, _9__3, 0LL);
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
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}