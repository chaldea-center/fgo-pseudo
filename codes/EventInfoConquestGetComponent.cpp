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
  __int64 v9; // x2

  if ( (byte_4B16A29 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoConquestGetComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_21665/*"military_production_bg"*/, v8, v9);
    byte_4B16A29 = 1;
  }
  EventInfoConquestGetComponent_TypeInfo->static_fields->EVENT_CONQUEST_GET_BG = (struct System_String_o *)StringLiteral_21665/*"military_production_bg"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoConquestGetComponent_TypeInfo->static_fields,
    StringLiteral_21665/*"military_production_bg"*/,
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x19
  UnityEngine_Component_o *gameObject; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  UnityEngine_Object_o *dialog; // x22
  __int64 v53; // x1
  TerminalPramsManager_c *v54; // x0
  UISprite_o *backSprite; // x22
  EventInfoConquestGetComponent_c *v56; // x0
  System_String_o *EVENT_CONQUEST_GET_BG; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Collections_Generic_List_object__o *v61; // x22
  void **v62; // x21
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x23
  int v72; // w8
  unsigned int v73; // w24
  __int64 v74; // x27
  int64_t v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int v82; // w8
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 klass_low; // x10
  __int64 v86; // x8
  System_String_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_String_o *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v105; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v107; // x21

  if ( (byte_4B16A28 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&EventInfoConquestGetComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&GiftEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v28, v29);
    sub_1BCA7E0(&EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_5667/*"EVENT_CONQUEST_GET_MESSAGE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_5668/*"EVENT_CONQUEST_GET_TITLE"*/, v34, v35);
    byte_4B16A28 = 1;
  }
  v36 = sub_1BCAA2C(EventInfoConquestGetComponent___c__DisplayClass3_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_39;
  *(_QWORD *)(v36 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 48), (int64_t)callback, v45, v46, v47, v48, v49, v50);
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Equality(dialog, 0LL, 0LL) )
    goto LABEL_38;
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v53);
    v54 = TerminalPramsManager_TypeInfo;
  }
  if ( !v54->static_fields->eventConquestInfos )
    goto LABEL_38;
  backSprite = this->fields.backSprite;
  v56 = EventInfoConquestGetComponent_TypeInfo;
  if ( !EventInfoConquestGetComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoConquestGetComponent_TypeInfo, v53);
    v56 = EventInfoConquestGetComponent_TypeInfo;
  }
  EVENT_CONQUEST_GET_BG = v56->static_fields->EVENT_CONQUEST_GET_BG;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v53);
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
  v61 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                       v58,
                                                       v59,
                                                       v60);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v36 + 24) = v61;
  v62 = (void **)(v36 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)v61, v63, v64, v65, v66, v67, v68);
  gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
    gameObject = (UnityEngine_Component_o *)TerminalPramsManager_TypeInfo;
  }
  v71 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 664LL);
  if ( !v71 )
    goto LABEL_39;
  v72 = *(_DWORD *)(v71 + 24);
  if ( v72 >= 1 )
  {
    v73 = 0;
    while ( 1 )
    {
      if ( v73 >= v72 )
        sub_1BCAA44(gameObject, v38);
      v74 = *(_QWORD *)(v71 + 8LL * (int)v73 + 32);
      v75 = sub_1BCAA2C(GiftEntity_TypeInfo, v38, v69, v70);
      GiftEntity___ctor((GiftEntity_o *)v75, 0LL);
      if ( !v75 )
        break;
      *(_DWORD *)(v75 + 16) = 0;
      if ( !v74 )
        break;
      *(_QWORD *)(v75 + 20) = *(_QWORD *)(v74 + 16);
      v82 = *(_DWORD *)(v74 + 28);
      *(_QWORD *)(v75 + 32) = 0LL;
      *(_DWORD *)(v75 + 28) = v82;
      gameObject = (UnityEngine_Component_o *)*v62;
      if ( !*v62 )
        break;
      v83 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v84 = Method_System_Collections_Generic_List_GiftEntity__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v83 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v83 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v75,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = v83 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v86 + 32) = v75;
        sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 32), v75, v76, v77, v78, v79, v80, v81);
      }
      v72 = *(_DWORD *)(v71 + 24);
      if ( (int)++v73 >= v72 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1BCAA3C(gameObject, v38);
  }
LABEL_31:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_CONQUEST_GET_TITLE"*/, 0LL);
  *(_QWORD *)(v36 + 32) = v87;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v87, v88, v89, v90, v91, v92, v93);
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_CONQUEST_GET_MESSAGE"*/, 0LL);
  *(_QWORD *)(v36 + 40) = v94;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 40), (int64_t)v94, v95, v96, v97, v98, v99, v100);
  if ( *(_QWORD *)(v36 + 40) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v105 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v101);
      v105 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v105->static_fields->DEFAULT_FADE_TIME;
    v107 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v101, v102, v103);
    System_Action___ctor(
      v107,
      (Il2CppObject *)v36,
      (intptr_t)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v107, 0LL);
  }
  else
  {
LABEL_38:
    ActionExtensions__Call(*(System_Action_o **)(v36 + 48), 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_Collections_Generic_List_object__o *giftList; // x0
  __int64 v13; // x1
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  EventConquestGetDialog_ClickDelegate_o *_9__1; // x24
  GiftEntity_array *v19; // x23
  System_String_o *title; // x21
  System_String_o *message; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B16A2A & 1) == 0 )
  {
    sub_1BCA7E0(&EventConquestGetDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__, v6, v7);
    sub_1BCA7E0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__, v8, v9);
    byte_4B16A2A = 1;
  }
  v10 = Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__;
  if ( (*((_BYTE *)Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__0__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlayCommonSe(v11, 29, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  giftList = (System_Collections_Generic_List_object__o *)this->fields.giftList;
  if ( !giftList )
    goto LABEL_11;
  dialog = _4__this->fields.dialog;
  giftList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                            giftList,
                                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  _9__1 = this->fields.__9__1;
  v19 = (GiftEntity_array *)giftList;
  title = this->fields.title;
  message = this->fields.message;
  if ( !_9__1 )
  {
    _9__1 = (EventConquestGetDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        EventConquestGetDialog_ClickDelegate_TypeInfo,
                                                        v13,
                                                        v16,
                                                        v17);
    EventConquestGetDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v22, v23, v24, v25, v26, v27);
  }
  if ( !dialog )
LABEL_11:
    sub_1BCAA3C(giftList, v13);
  EventConquestGetDialog__Open(dialog, v19, title, message, _9__1, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__1(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventInfoConquestGetComponent___c__DisplayClass3_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct EventInfoConquestGetComponent_o *_4__this; // x8
  EventConquestGetDialog_o *dialog; // x20
  System_Action_o *_9__2; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B16A2B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventInfoConquestGetComponent___c__DisplayClass3_0_o *)sub_1BCA7E0(
                                                                     &Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
                                                                     v5,
                                                                     v6);
    byte_4B16A2B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  dialog = _4__this->fields.dialog;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !dialog )
LABEL_8:
    sub_1BCAA3C(this, method);
  EventConquestGetDialog__Close_46314116(dialog, _9__2, 0LL);
}


void __fastcall EventInfoConquestGetComponent___c__DisplayClass3_0___Open_b__2(
        EventInfoConquestGetComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B16A2C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__, v8, v9);
    byte_4B16A2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventInfoConquestGetComponent___c__DisplayClass3_0__Open_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v18, v19, v20, v21, v22, v23);
  }
  if ( !v15 )
    sub_1BCAA3C(Instance, v11);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, _9__3, 0LL);
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
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}