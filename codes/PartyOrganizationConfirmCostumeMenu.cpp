void __fastcall PartyOrganizationConfirmCostumeMenu___ctor(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FAA66 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_49FAA66 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Callback(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v5; // x19
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Close(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmCostumeMenu__Close_31745436(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Close_31745436(
        PartyOrganizationConfirmCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49FAA64 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, callback);
    sub_1B64A00(&Method_PartyOrganizationConfirmCostumeMenu_EndClose__, v6);
    byte_49FAA64 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationConfirmCostumeMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__EndClose(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmCostumeMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B649A4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
  UILabel_o *titleLabel; // x0

  if ( (byte_49FAA62 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_49FAA62 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1B64C5C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__OnClickClose(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FAA65 & 1) == 0 )
  {
    sub_1B64A00(&Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__, method);
    byte_49FAA65 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmCostumeMenu__Callback(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmCostumeMenu__Open(
        PartyOrganizationConfirmCostumeMenu_o *this,
        int32_t kind,
        PartyOrganizationListViewItem_o *item,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
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
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_object__o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // x5
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x24
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  System_String_o *v37; // x22
  Il2CppObject *SvtNameText; // x23
  const MethodInfo *v39; // x1
  Il2CppObject *CostumeName; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v42; // x20

  if ( (byte_49FAA63 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v14);
    sub_1B64A00(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v15);
    sub_1B64A00(&LocalizationManager_TypeInfo, v16);
    sub_1B64A00(&Method_PartyOrganizationConfirmCostumeMenu_EndOpen__, v17);
    sub_1B64A00(&PartyOrganizationConfirmItemDraw_TypeInfo, v18);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B64A00(&StringLiteral_10116/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/, v20);
    sub_1B64A00(&StringLiteral_10117/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/, v21);
    sub_1B64A00(&StringLiteral_10118/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/, v22);
    byte_49FAA63 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)item,
      (int32_t)setupInfo);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v25 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v25,
        (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
              if ( this->fields.memberObjectList )
              {
                if ( v25 )
                {
                  items = v25->fields._items;
                  v29 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                  ++v25->fields._version;
                  if ( items )
                  {
                    size = v25->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v25,
                        (Il2CppObject *)item,
                        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v31 = &items->obj.klass + size;
                      v25->fields._size = size + 1;
                      v31[4] = (Il2CppClass *)item;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)item, v26, v27);
                    }
                    supportMemberBase = this->fields.supportMemberBase;
                    memberObjectList = this->fields.memberObjectList;
                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                    PartyOrganizationConfirmItemDraw__SetPartyIcon(
                      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v25,
                      memberObjectList,
                      supportMemberBase,
                      0,
                      0,
                      v32);
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
LABEL_27:
                        this->fields.state = 1;
                        v42 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
                        System_Action___ctor(
                          v42,
                          (Il2CppObject *)this,
                          Method_PartyOrganizationConfirmCostumeMenu_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
                        return;
                      }
                      titleLabel = this->fields.titleLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10118/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/,
                                                                 0LL);
                      if ( titleLabel )
                      {
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        messageLabel = this->fields.messageLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10117/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/,
                                                                   0LL);
                        if ( item )
                        {
                          v37 = (System_String_o *)gameObject;
                          SvtNameText = (Il2CppObject *)PartyOrganizationListViewItem__get_SvtNameText(item, v24);
                          CostumeName = (Il2CppObject *)PartyOrganizationListViewItem__get_CostumeName(item, v39);
                          gameObject = (UnityEngine_GameObject_o *)System_String__Format_61399508(
                                                                     v37,
                                                                     SvtNameText,
                                                                     CostumeName,
                                                                     0LL);
                          if ( messageLabel )
                          {
                            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                            closeLabel = this->fields.closeLabel;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_10116/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/,
                                                                       0LL);
                            if ( closeLabel )
                            {
                              UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
                              goto LABEL_27;
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
      }
    }
    sub_1B64C5C(gameObject, v24);
  }
}


void __fastcall PartyOrganizationConfirmCostumeMenu__add_callbackFunc(
        PartyOrganizationConfirmCostumeMenu_o *this,
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmCostumeMenu_o *v11; // x0
  PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FAA60 & 1) == 0 )
  {
    sub_1B64A00(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, value);
    byte_49FAA60 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmCostumeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCostumeMenu_o *)sub_1B64F1C(v8);
  PartyOrganizationConfirmCostumeMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__remove_callbackFunc(
        PartyOrganizationConfirmCostumeMenu_o *this,
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmCostumeMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FAA61 & 1) == 0 )
  {
    sub_1B64A00(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, value);
    byte_49FAA61 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmCostumeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCostumeMenu_o *)sub_1B64F1C(v8);
  PartyOrganizationConfirmCostumeMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A706C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A702C;
}


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B649B4(this, &v5, callback, object);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}