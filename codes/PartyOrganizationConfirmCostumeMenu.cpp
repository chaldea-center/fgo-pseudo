void __fastcall PartyOrganizationConfirmCostumeMenu___ctor(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB05D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB05D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Callback(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmCostumeMenu_CallbackFunc__Invoke(v9, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Close(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmCostumeMenu__Close_29704676(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Close_29704676(
        PartyOrganizationConfirmCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EB05B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationConfirmCostumeMenu_EndClose__, v10, v11, v12);
    byte_42EB05B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationConfirmCostumeMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__EndClose(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmCostumeMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmCostumeMenu__EndOpen(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Init(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EB059 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB059 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__OnClickClose(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EB05C & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EB05C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    PartyOrganizationConfirmCostumeMenu__Callback(this, v7);
  }
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Open(
        PartyOrganizationConfirmCostumeMenu_o *this,
        int32_t kind,
        PartyOrganizationListViewItem_o *item,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v47; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x23
  const MethodInfo *v49; // x5
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x24
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  System_String_o *v54; // x22
  Il2CppObject *SvtNameText; // x23
  const MethodInfo *v56; // x1
  Il2CppObject *CostumeName; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v59; // x20

  if ( (byte_42EB05A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)item, setupInfo);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_PartyOrganizationConfirmCostumeMenu_EndOpen__, v28, v29, v30);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_10352/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_10353/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_10354/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/, v43, v44, v45);
    byte_42EB05A = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)item,
      (System_String_array **)setupInfo,
      (System_Boolean_array **)questRestrictionInfo,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v48,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        if ( questRestrictionInfo )
        {
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                       (NpcFollowerMaster_o *)gameObject,
                                                       questRestrictionInfo->fields.questId,
                                                       questRestrictionInfo->fields.questPhase,
                                                       0LL);
            if ( gameObject )
            {
              if ( this->fields.memberObjectList && v48 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v48,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)item,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
                supportMemberBase = this->fields.supportMemberBase;
                memberObjectList = this->fields.memberObjectList;
                if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                }
                PartyOrganizationConfirmItemDraw__SetPartyIcon(
                  (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v48,
                  memberObjectList,
                  supportMemberBase,
                  0,
                  0,
                  v49);
                gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                if ( gameObject )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                    gameObject,
                    0LL,
                    1LL,
                    gameObject->klass[1]._1.interfaceOffsets);
                  if ( kind )
                  {
LABEL_24:
                    this->fields.state = 1;
                    v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                    System_Action___ctor(
                      v59,
                      (Il2CppObject *)this,
                      Method_PartyOrganizationConfirmCostumeMenu_EndOpen__,
                      0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
                    return;
                  }
                  titleLabel = this->fields.titleLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10354/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/,
                                                             0LL);
                  if ( titleLabel )
                  {
                    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                    messageLabel = this->fields.messageLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10353/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/,
                                                               0LL);
                    if ( item )
                    {
                      v54 = (System_String_o *)gameObject;
                      SvtNameText = (Il2CppObject *)PartyOrganizationListViewItem__get_SvtNameText(item, v47);
                      CostumeName = (Il2CppObject *)PartyOrganizationListViewItem__get_CostumeName(item, v56);
                      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(
                                                                 v54,
                                                                 SvtNameText,
                                                                 CostumeName,
                                                                 0LL);
                      if ( messageLabel )
                      {
                        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                        closeLabel = this->fields.closeLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10352/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/,
                                                                   0LL);
                        if ( closeLabel )
                        {
                          UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
                          goto LABEL_24;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B5D69C(gameObject, v47);
  }
}


void __fastcall PartyOrganizationConfirmCostumeMenu__add_callbackFunc(
        PartyOrganizationConfirmCostumeMenu_o *this,
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmCostumeMenu_o *v12; // x0
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB057 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB057 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmCostumeMenu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmCostumeMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__remove_callbackFunc(
        PartyOrganizationConfirmCostumeMenu_o *this,
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmCostumeMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB058 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB058 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmCostumeMenu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmCostumeMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (PartyOrganizationConfirmCostumeMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}