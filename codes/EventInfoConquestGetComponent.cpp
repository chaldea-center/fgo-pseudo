void __fastcall EventInfoConquestGetComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BB4F04 & 1) == 0 )
  {
    sub_1C13D24(&EventInfoConquestGetComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_21787/*"method return type is incompatible"*/, v8);
    byte_4BB4F04 = 1;
  }
  EventInfoConquestGetComponent_TypeInfo->static_fields->EVENT_CONQUEST_GET_BG = (struct System_String_o *)StringLiteral_21787/*"method return type is incompatible"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventInfoConquestGetComponent_TypeInfo->static_fields,
    StringLiteral_21787/*"method return type is incompatible"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Object_o *dialog; // x22
  TerminalPramsManager_c *v36; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v38; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  System_Collections_Generic_List_object__o *v40; // x22
  void **v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x23
  int v49; // w8
  unsigned int v50; // w24
  __int64 v51; // x27
  int64_t v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int v59; // w8
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 klass_low; // x10
  __int64 v63; // x8
  System_String_o *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_String_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v79; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v81; // x21

  if ( (byte_4BB4F03 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&AtlasManager_TypeInfo, v5);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v6);
    sub_1C13D24(&EventInfoConquestGetComponent_TypeInfo, v7);
    sub_1C13D24(&GiftEntity_TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_GiftEntity__TypeInfo, v11);
    sub_1C13D24(&LocalizationManager_TypeInfo, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v15);
    sub_1C13D24(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v16);
    sub_1C13D24(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, v17);
    sub_1C13D24(&StringLiteral_5692/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, v18);
    sub_1C13D24(&StringLiteral_5693/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, v19);
    byte_4BB4F03 = 1;
  }
  v20 = sub_1C13F70(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_39;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 48) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 48), (int64_t)callback, v29, v30, v31, v32, v33, v34);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_38;
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  if ( !v36->static_fields->eventConquestInfos )
    goto LABEL_38;
  backSprite = this->fields.backSprite;
  v38 = EventInfoConquestGetComponent_TypeInfo;
  if ( !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo);
    v38 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v38->static_fields->EVENT_CONQUEST_GET_BG;
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
  v40 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v20 + 24) = v40;
  v41 = (void **)(v20 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)v40, v42, v43, v44, v45, v46, v47);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v48 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 664LL);
  if ( !v48 )
    goto LABEL_39;
  v49 = *(_DWORD *)(v48 + 24);
  if ( v49 >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= v49 )
        sub_1C13F88(gameObject, v22);
      v51 = *(_QWORD *)(v48 + 8LL * (int)v50 + 32);
      v52 = sub_1C13F70(GiftEntity_TypeInfo);
      GiftEntity___ctor((GiftEntity_o *)v52, 0LL);
      if ( !v52 )
        break;
      *(_DWORD *)(v52 + 16) = 0;
      if ( !v51 )
        break;
      *(_QWORD *)(v52 + 20) = *(_QWORD *)(v51 + 16);
      v59 = *(_DWORD *)(v51 + 28);
      *(_QWORD *)(v52 + 32) = 0LL;
      *(_DWORD *)(v52 + 28) = v59;
      gameObject = (UnityEngine_Component_o *)*v41;
      if ( !*v41 )
        break;
      v60 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v61 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v60 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v60 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v52,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = v60 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v63 + 32) = v52;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v63 + 32), v52, v53, v54, v55, v56, v57, v58);
      }
      v49 = *(_DWORD *)(v48 + 24);
      if ( (int)++v50 >= v49 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1C13F80(gameObject, v22);
  }
LABEL_31:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_5693/*"EVENT_CONQUEST_FARM_PRODUCT_FORMAT"*/, 0LL);
  *(_QWORD *)(v20 + 32) = v64;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v64, v65, v66, v67, v68, v69, v70);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5692/*"EVENT_CONQUEST_FARM_ITEM_FORMAT"*/, 0LL);
  *(_QWORD *)(v20 + 40) = v71;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 40), (int64_t)v71, v72, v73, v74, v75, v76, v77);
  if ( *(_QWORD *)(v20 + 40) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v79 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v79 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v79->static_fields->DEFAULT_FADE_TIME;
    v81 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v81,
      (Il2CppObject *)v20,
      (intptr_t)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v81, 0LL);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BB4F05 & 1) == 0 )
  {
    sub_1C13D24(&EventConquestGetDialog_ClickDelegate_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v3);
    sub_1C13D24(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v4);
    sub_1C13D24(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__, v5);
    byte_4BB4F05 = 1;
  }
  v6 = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C13D3C(Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
  OverwriteAssetSoundName__PlayCommonSe(v7, 29, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  giftList = (System_Collections_Generic_List_object__o *)this->fields.giftList;
  if ( !giftList )
    goto LABEL_11;
  dialog = _4__this->fields.dialog;
  giftList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                            giftList,
                                                            (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v13 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_1C13F70(EventConquestGetDialog_ClickDelegate_TypeInfo);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v16, v17, v18, v19, v20, v21);
  }
  if ( !dialog )
LABEL_11:
    sub_1C13F80(giftList, v9);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v2 = this;
  if ( (byte_4BB4F06 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_1C13D24(
                                                                     &Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
                                                                     v3);
    byte_4BB4F06 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !dialog )
LABEL_8:
    sub_1C13F80(this, method);
  EventConquestGetDialog__Close_46785956(dialog, _9__2, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB4F07 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__, v5);
    byte_4BB4F07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__3 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v12, v13, v14, v15, v16, v17);
  }
  if ( !v9 )
    sub_1C13F80(Instance, v7);
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
    sub_1C13F80(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}