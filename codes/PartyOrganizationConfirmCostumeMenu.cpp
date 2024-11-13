void __fastcall PartyOrganizationConfirmCostumeMenu___ctor(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11EFA & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11EFA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Callback(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *v3; // x19
  struct PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Close(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmCostumeMenu__Close_32551628(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__Close_32551628(
        PartyOrganizationConfirmCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11EF8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmCostumeMenu_EndClose__, v5, v6);
    byte_4B11EF8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmCostumeMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__EndClose(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmCostumeMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B11EF6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11EF6 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCostumeMenu__OnClickClose(
        PartyOrganizationConfirmCostumeMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B11EF9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__, method, v2);
    byte_4B11EF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmCostumeMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    PartyOrganizationConfirmCostumeMenu__Callback(this, v6);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x23
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x5
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *memberObjectList; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  System_String_o *v53; // x22
  Il2CppObject *SvtNameText; // x23
  const MethodInfo *v55; // x1
  Il2CppObject *CostumeName; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v58; // x20

  if ( (byte_4B11EF7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, item);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmCostumeMenu_EndOpen__, v22, v23);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_10296/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_10297/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_10298/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/, v32, v33);
    byte_4B11EF7 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo,
                                                           v36,
                                                           v37,
                                                           v38);
      System_Collections_Generic_List_object____ctor(
        v39,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
                if ( v39 )
                {
                  items = v39->fields._items;
                  v41 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
                  ++v39->fields._version;
                  if ( items )
                  {
                    size = v39->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v39,
                        (Il2CppObject *)item,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v43 = &items->obj.klass + size;
                      v39->fields._size = size + 1;
                      v43[4] = (Il2CppClass *)item;
                      sub_1BCA784(v43 + 4, item);
                    }
                    supportMemberBase = this->fields.supportMemberBase;
                    memberObjectList = this->fields.memberObjectList;
                    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo, v44);
                    PartyOrganizationConfirmItemDraw__SetPartyIcon(
                      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v39,
                      memberObjectList,
                      supportMemberBase,
                      0,
                      0,
                      v45);
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
                        v58 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
                        System_Action___ctor(
                          v58,
                          (Il2CppObject *)this,
                          Method_PartyOrganizationConfirmCostumeMenu_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
                        return;
                      }
                      titleLabel = this->fields.titleLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_TITLE"*/,
                                                                 0LL);
                      if ( titleLabel )
                      {
                        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                        messageLabel = this->fields.messageLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_MESSAGE"*/,
                                                                   0LL);
                        if ( item )
                        {
                          v53 = (System_String_o *)gameObject;
                          SvtNameText = (Il2CppObject *)PartyOrganizationListViewItem__get_SvtNameText(item, v35);
                          CostumeName = (Il2CppObject *)PartyOrganizationListViewItem__get_CostumeName(item, v55);
                          gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(
                                                                     v53,
                                                                     SvtNameText,
                                                                     CostumeName,
                                                                     0LL);
                          if ( messageLabel )
                          {
                            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                            closeLabel = this->fields.closeLabel;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_CONFIRM_FIXED_COSTUME_CLOSE"*/,
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
    sub_1BCAA3C(gameObject, v35);
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

  if ( (byte_4B11EF4 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11EF4 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCostumeMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B11EF5 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmCostumeMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11EF5 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCostumeMenu_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A071D8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07198;
}


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmCostumeMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmCostumeMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}