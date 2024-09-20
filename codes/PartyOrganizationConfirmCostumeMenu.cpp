void __fastcall PartyOrganizationConfirmCostumeMenu___ctor(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5701D & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5701D = 1;
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
    sub_1B88554(p_callbackFunc, 0, v2, v3);
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

  PartyOrganizationConfirmCostumeMenu__Close_32004556(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Close_32004556(
        PartyOrganizationConfirmCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5701B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationConfirmCostumeMenu_EndClose__);
    byte_4A5701B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmCostumeMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A57019 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57019 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1B8880C(titleLabel, method);
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

  if ( (byte_4A5701C & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__);
    byte_4A5701C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmCostumeMenu__Callback(this, v5);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x5
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x24
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  System_String_o *v26; // x22
  Il2CppObject *SvtNameText; // x23
  const MethodInfo *v28; // x1
  Il2CppObject *CostumeName; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v31; // x20

  if ( (byte_4A5701A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationConfirmCostumeMenu_EndOpen__);
    sub_1B885B0(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10163/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/);
    sub_1B885B0(&StringLiteral_10164/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10165/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/);
    byte_4A5701A = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)item,
      (int32_t)setupInfo);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                if ( v14 )
                {
                  items = v14->fields._items;
                  v18 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                  ++v14->fields._version;
                  if ( items )
                  {
                    size = v14->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v14,
                        (Il2CppObject *)item,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v20 = &items->obj.klass + size;
                      v14->fields._size = size + 1;
                      v20[4] = (Il2CppClass *)item;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)item, v15, v16);
                    }
                    supportMemberBase = this->fields.supportMemberBase;
                    memberObjectList = this->fields.memberObjectList;
                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
                    PartyOrganizationConfirmItemDraw__SetPartyIcon(
                      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v14,
                      memberObjectList,
                      supportMemberBase,
                      0,
                      0,
                      v21);
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
                        v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v31,
                          (Il2CppObject *)this,
                          Method_PartyOrganizationConfirmCostumeMenu_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
                        return;
                      }
                      titleLabel = this->fields.titleLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10165/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/,
                                                                 0LL);
                      if ( titleLabel )
                      {
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        messageLabel = this->fields.messageLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10164/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/,
                                                                   0LL);
                        if ( item )
                        {
                          v26 = (System_String_o *)gameObject;
                          SvtNameText = (Il2CppObject *)PartyOrganizationListViewItem__get_SvtNameText(item, v13);
                          CostumeName = (Il2CppObject *)PartyOrganizationListViewItem__get_CostumeName(item, v28);
                          gameObject = (UnityEngine_GameObject_o *)System_String__Format_61721404(
                                                                     v26,
                                                                     SvtNameText,
                                                                     CostumeName,
                                                                     0LL);
                          if ( messageLabel )
                          {
                            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                            closeLabel = this->fields.closeLabel;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_10163/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/,
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
    sub_1B8880C(gameObject, v13);
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

  if ( (byte_4A57017 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo);
    byte_4A57017 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCostumeMenu_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A57018 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo);
    byte_4A57018 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCostumeMenu_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8F28;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8EE8;
}


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}