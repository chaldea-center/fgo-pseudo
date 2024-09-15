void __fastcall EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A2EA7B & 1) == 0 )
  {
    sub_1B761C0(&EventInfoConquestGetComponent_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_21426/*"military_production_bg"*/, v4);
    byte_4A2EA7B = 1;
  }
  EventInfoConquestGetComponent_TypeInfo->static_fields->EVENT_CONQUEST_GET_BG = (struct System_String_o *)StringLiteral_21426/*"military_production_bg"*/;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventInfoConquestGetComponent_TypeInfo->static_fields,
    StringLiteral_21426/*"military_production_bg"*/,
    v2,
    v3);
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
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v28; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v30; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_object__o *v32; // x22
  void **v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x23
  int v37; // w8
  unsigned int v38; // w24
  __int64 v39; // x27
  __int64 v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  int v43; // w8
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 klass_low; // x10
  __int64 v47; // x8
  System_String_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v55; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v57; // x21

  if ( (byte_4A2EA7A & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, callback);
    sub_1B761C0(&AtlasManager_TypeInfo, v5);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v6);
    sub_1B761C0(&EventInfoConquestGetComponent_TypeInfo, v7);
    sub_1B761C0(&GiftEntity_TypeInfo, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v10);
    sub_1B761C0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v11);
    sub_1B761C0(&LocalizationManager_TypeInfo, v12);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v15);
    sub_1B761C0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v16);
    sub_1B761C0(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, v17);
    sub_1B761C0(&StringLiteral_5587/*"EVENT_CONQUEST_GET_MESSAGE"*/, v18);
    sub_1B761C0(&StringLiteral_5588/*"EVENT_CONQUEST_GET_TITLE"*/, v19);
    byte_4A2EA7A = 1;
  }
  v20 = sub_1B7640C(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_39;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v20 + 48) = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v20 + 48), (int32_t)callback, v25, v26);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_38;
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->eventConquestInfos )
    goto LABEL_38;
  backSprite = this->fields.backSprite;
  v30 = EventInfoConquestGetComponent_TypeInfo;
  if ( !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v30 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v30->static_fields->EVENT_CONQUEST_GET_BG;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(backSprite, EVENT_CONQUEST_GET_BG, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_39;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
    gameObject,
    gameObject->klass[2]._1.interopData);
  gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !gameObject )
    goto LABEL_39;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v20 + 24) = v32;
  v33 = (void **)(v20 + 24);
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)v32, v34, v35);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v36 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 664LL);
  if ( !v36 )
    goto LABEL_39;
  v37 = *(_DWORD *)(v36 + 24);
  if ( v37 >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      if ( v38 >= v37 )
        sub_1B76424(gameObject, v22);
      v39 = *(_QWORD *)(v36 + 8LL * (int)v38 + 32);
      v40 = sub_1B7640C(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v40, 0LL);
      if ( !v40 )
        break;
      *(_DWORD *)(v40 + 16) = 0;
      if ( !v39 )
        break;
      *(_QWORD *)(v40 + 20) = *(_QWORD *)(v39 + 16);
      v43 = *(_DWORD *)(v39 + 28);
      *(_QWORD *)(v40 + 32) = 0LL;
      *(_DWORD *)(v40 + 28) = v43;
      gameObject = (UnityEngine_Component_o *)*v33;
      if ( !*v33 )
        break;
      v44 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v45 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v44 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v44 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v40,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = v44 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v47 + 32) = v40;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v47 + 32), v40, v41, v42);
      }
      v37 = *(_DWORD *)(v36 + 24);
      if ( (int)++v38 >= v37 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1B7641C(gameObject, v22);
  }
LABEL_31:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5588/*"EVENT_CONQUEST_GET_TITLE"*/, 0LL);
  *(_QWORD *)(v20 + 32) = v48;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v48, v49, v50);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5587/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0LL);
  *(_QWORD *)(v20 + 40) = v51;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v20 + 40), (int32_t)v51, v52, v53);
  if ( *(_QWORD *)(v20 + 40) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v55 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v55 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v55->static_fields->DEFAULT_FADE_TIME;
    v57 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v20,
      (intptr_t)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v57, 0LL);
  }
  else
  {
LABEL_38:
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Collections_Generic_List_object__o *giftList; // x0
  __int64 v9; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v13; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A2EA7C & 1) == 0 )
  {
    sub_1B761C0(&EventConquestGetDialog_ClickDelegate_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_1B761C0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v4);
    sub_1B761C0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__, v5);
    byte_4A2EA7C = 1;
  }
  v6 = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B761D8(Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B761A4(v6, v6[4]);
  OverwriteAssetSoundName__PlayCommonSe(v7, 29, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  giftList = (System_Collections_Generic_List_object__o *)this->fields.giftList;
  if ( !giftList )
    goto LABEL_11;
  dialog = _4__this->fields.dialog;
  giftList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                            giftList,
                                                            (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v13 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_1B7640C(EventConquestGetDialog_ClickDelegate_TypeInfo);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  if ( !dialog )
LABEL_11:
    sub_1B7641C(giftList, v9);
  EventConquestGetDialog__Open(dialog, v13, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v2; // x19
  __int64 v3; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = this;
  if ( (byte_4A2EA7D & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_1B761C0(
                                                                     &Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
                                                                     v3);
    byte_4A2EA7D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  if ( !dialog )
LABEL_8:
    sub_1B7641C(this, method);
  EventConquestGetDialog__Close_45303720(dialog, _9__2, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A2EA7E & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__, v5);
    byte_4A2EA7E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v12, v13);
  }
  if ( !v9 )
    sub_1B7641C(Instance, v7);
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
    sub_1B7641C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}