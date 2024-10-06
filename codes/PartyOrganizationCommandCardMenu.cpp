void __fastcall PartyOrganizationCommandCardMenu___ctor(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A6BCEC & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    sub_1B90010(&PartyOrganizationConfirmItemDraw___TypeInfo, v3);
    byte_4A6BCEC = 1;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B900B8(PartyOrganizationConfirmItemDraw___TypeInfo, 3LL);
  this->fields.memberObjectList = v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationCommandCardMenu__Callback(
        PartyOrganizationCommandCardMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B8FFB4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationCommandCardMenu__Close(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationCommandCardMenu__Close_32029904(this, 0LL, v2);
}


void __fastcall PartyOrganizationCommandCardMenu__Close_32029904(
        PartyOrganizationCommandCardMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A6BCE9 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_PartyOrganizationCommandCardMenu_EndClose__, v6);
    byte_4A6BCE9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationCommandCardMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationCommandCardMenu__EndClose(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationCommandCardMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B8FFB4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationCommandCardMenu__EndOpen(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationCommandCardMenu__Init(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A6BCE7 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A6BCE7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.compatibilitySprite) == 0LL) )
  {
    sub_1B9026C(titleLabel, method);
  }
  UISprite__set_atlas((UISprite_o *)titleLabel, 0LL, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationCommandCardMenu__OnClickCancel(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A6BCEA & 1) == 0 )
  {
    sub_1B90010(&Method_PartyOrganizationCommandCardMenu_OnClickCancel__, method);
    byte_4A6BCEA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationCommandCardMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationCommandCardMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_PartyOrganizationCommandCardMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationCommandCardMenu__Callback(this, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationCommandCardMenu__Open(
        PartyOrganizationCommandCardMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        PartyOrganizationCommandCardMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  PartyOrganizationListViewItem_o *v14; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v16; // x21
  const MethodInfo *v17; // x7
  struct PartyOrganizationConfirmItemDraw_array *v18; // x8
  UILabel_o *titleLabel; // x20
  UILabel_o *closeLabel; // x20
  UISprite_o *compatibilitySprite; // x20
  System_Action_o *v22; // x20

  if ( (byte_4A6BCE8 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B90010(&AtlasManager_TypeInfo, v8);
    sub_1B90010(&LocalizationManager_TypeInfo, v9);
    sub_1B90010(&Method_PartyOrganizationCommandCardMenu_EndOpen__, v10);
    sub_1B90010(&StringLiteral_10139/*"PARTY_ORGANIZATION_COMMAND_CARD_TITLE"*/, v11);
    sub_1B90010(&StringLiteral_10138/*"PARTY_ORGANIZATION_COMMAND_CARD_CLOSE"*/, v12);
    byte_4A6BCE8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (int32_t)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_13;
    v16 = 0LL;
    while ( (int)v16 < (signed int)memberObjectList->max_length )
    {
      if ( partyItem )
      {
        gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v16, 0LL);
        v18 = this->fields.memberObjectList;
        if ( v18 )
        {
          if ( (unsigned int)v16 >= v18->max_length )
            sub_1B90274(gameObject, v14);
          v14 = (PartyOrganizationListViewItem_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)v18->m_Items[v16];
          if ( gameObject )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              (PartyOrganizationConfirmItemDraw_o *)gameObject,
              v14,
              2,
              0,
              0,
              0,
              0,
              v17);
            memberObjectList = this->fields.memberObjectList;
            ++v16;
            if ( memberObjectList )
              continue;
          }
        }
      }
      goto LABEL_13;
    }
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10139/*"PARTY_ORGANIZATION_COMMAND_CARD_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10138/*"PARTY_ORGANIZATION_COMMAND_CARD_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_13:
      sub_1B9026C(gameObject, v14);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    compatibilitySprite = this->fields.compatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetClassChart_37905112(compatibilitySprite, 0LL);
    this->fields.state = 1;
    v22 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_PartyOrganizationCommandCardMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
  }
}


void __fastcall PartyOrganizationCommandCardMenu__add_callbackFunc(
        PartyOrganizationCommandCardMenu_o *this,
        PartyOrganizationCommandCardMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationCommandCardMenu_o *v11; // x0
  PartyOrganizationCommandCardMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A6BCE5 & 1) == 0 )
  {
    sub_1B90010(&PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo, value);
    byte_4A6BCE5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationCommandCardMenu_CallbackFunc_c *)v8->klass != PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationCommandCardMenu_o *)sub_1B9052C(v8);
  PartyOrganizationCommandCardMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationCommandCardMenu__get_closeBtnPath(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6BCEB & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_3199/*"BaseWindow/CloseButton"*/, method);
    byte_4A6BCEB = 1;
  }
  return (System_String_o *)StringLiteral_3199/*"BaseWindow/CloseButton"*/;
}


void __fastcall PartyOrganizationCommandCardMenu__remove_callbackFunc(
        PartyOrganizationCommandCardMenu_o *this,
        PartyOrganizationCommandCardMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationCommandCardMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A6BCE6 & 1) == 0 )
  {
    sub_1B90010(&PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo, value);
    byte_4A6BCE6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationCommandCardMenu_CallbackFunc_c *)v8->klass != PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BCB500(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationCommandCardMenu_o *)sub_1B9052C(v8);
  PartyOrganizationCommandCardMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationCommandCardMenu_CallbackFunc___ctor(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D0220;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D01D8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationCommandCardMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A6BCED & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, result);
    byte_4A6BCED = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall PartyOrganizationCommandCardMenu_CallbackFunc__EndInvoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall PartyOrganizationCommandCardMenu_CallbackFunc__Invoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}