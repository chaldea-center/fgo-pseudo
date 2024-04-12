void __fastcall EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B0DBC & 1) == 0 )
  {
    sub_B52984(&EventInfoConquestGetComponent_TypeInfo);
    sub_B52984(&StringLiteral_20660/*"military_production_bg"*/);
    byte_42B0DBC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoConquestGetComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_20660/*"military_production_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20660/*"military_production_bg"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  __int64 v5; // x19
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v21; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v23; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  void **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x23
  int v34; // w8
  unsigned int v35; // w24
  _DWORD *v36; // x27
  __int64 v37; // x22
  int v38; // w8
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v54; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v56; // x21
  __int64 v57; // x0

  if ( (byte_42B0DBB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&EventInfoConquestGetComponent_TypeInfo);
    sub_B52984(&GiftEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
    sub_B52984(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
    sub_B52984(&StringLiteral_5638/*"EVENT_CONQUEST_GET_MESSAGE"*/);
    sub_B52984(&StringLiteral_5639/*"EVENT_CONQUEST_GET_TITLE"*/);
    byte_42B0DBB = 1;
  }
  v5 = sub_B52A54(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  EventInfoConquestGetComponent___c__DisplayClass3_0___ctor(
    (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_42;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_41;
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21->static_fields->eventConquestInfos )
    goto LABEL_41;
  backSprite = this->fields.backSprite;
  v23 = EventInfoConquestGetComponent_TypeInfo;
  if ( (BYTE3(EventInfoConquestGetComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v23 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v23->static_fields->EVENT_CONQUEST_GET_BG;
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
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v5 + 24) = v25;
  v26 = (void **)(v5 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v33 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 632LL);
  if ( !v33 )
    goto LABEL_42;
  v34 = *(_DWORD *)(v33 + 24);
  if ( v34 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= v34 )
      {
        v57 = sub_B52A88(gameObject);
        sub_B52A28(v57, 0LL);
      }
      v36 = *(_DWORD **)(v33 + 8LL * (int)v35 + 32);
      v37 = sub_B52A54(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v37, 0LL);
      if ( !v37 )
        break;
      *(_DWORD *)(v37 + 16) = 0;
      if ( !v36 )
        break;
      *(_DWORD *)(v37 + 20) = v36[4];
      *(_DWORD *)(v37 + 24) = v36[5];
      v38 = v36[7];
      *(_QWORD *)(v37 + 32) = 0LL;
      *(_DWORD *)(v37 + 28) = v38;
      gameObject = (UnityEngine_Component_o *)*v26;
      if ( !*v26 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
      v34 = *(_DWORD *)(v33 + 24);
      if ( (int)++v35 >= v34 )
        goto LABEL_32;
    }
LABEL_42:
    sub_B52A5C(gameObject, v7);
  }
LABEL_32:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_CONQUEST_GET_TITLE"*/, 0LL);
  *(_QWORD *)(v5 + 32) = v39;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_5638/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0LL);
  *(_QWORD *)(v5 + 40) = v46;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), v46, v47, v48, v49, v50, v51, v52);
  if ( *(_QWORD *)(v5 + 40) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v54 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v54 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v54->static_fields->DEFAULT_FADE_TIME;
    v56 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v5,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_42;
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v56, 0LL);
  }
  else
  {
LABEL_41:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 48), 0LL);
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
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *giftList; // x0
  __int64 v4; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  struct EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v8; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  __int64 v11; // x9

  if ( (byte_42AD8EF & 1) == 0 )
  {
    sub_B52984(&EventConquestGetDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_B52984(&SeManager_TypeInfo);
    sub_B52984(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__);
    byte_42AD8EF = 1;
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
                                                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v8 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (struct EventConquestGetDialog_ClickDelegate_o *)sub_B52A54(EventConquestGetDialog_ClickDelegate_TypeInfo);
    v11 = *(_QWORD *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.extra_arg = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__;
    *(_QWORD *)&_9__1->fields.method_ptr = v11;
    *(_QWORD *)&_9__1->fields.method = this;
    sub_B52920(&_9__1->fields.method);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  if ( !dialog )
LABEL_12:
    sub_B52A5C(giftList, v4);
  EventConquestGetDialog__Open(dialog, v8, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  EventConquestGetDialog_o *data; // x20
  System_Action_o *v5; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_42AD8F0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_B52984(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__);
    byte_42AD8F0 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  data = (EventConquestGetDialog_o *)klass->_1.byval_arg.data;
  v5 = (System_Action_o *)v2[4].klass;
  if ( !v5 )
  {
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, v2, Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__, 0LL);
    v2[4].klass = (Il2CppClass *)v5;
    sub_B52920(&v2[4]);
  }
  if ( !data )
LABEL_8:
    sub_B52A5C(this, method);
  EventConquestGetDialog__Close_29640268(data, v5, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21

  if ( (byte_42AD8F1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__);
    byte_42AD8F1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B52920(&this->fields.__9__3);
  }
  if ( !v5 )
    sub_B52A5C(Instance, v4);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, _9__3, 0LL);
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
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}