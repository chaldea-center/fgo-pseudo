void PartyOrganizationCommandCardMenu___ctor(PartyOrganizationCommandCardMenu_o *this, const MethodInfo *method)
{
  struct PartyOrganizationConfirmItemDraw_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C22CBF & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4C22CBF = 1;
  }
  v3 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C2D538(PartyOrganizationConfirmItemDraw___TypeInfo, 3);
  this->fields.memberObjectList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberObjectList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationCommandCardMenu__Callback(
        PartyOrganizationCommandCardMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void PartyOrganizationCommandCardMenu__Close(PartyOrganizationCommandCardMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationCommandCardMenu__Close_33963668(this, 0, v2);
}


void PartyOrganizationCommandCardMenu__Close_33963668(
        PartyOrganizationCommandCardMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C22CBC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationCommandCardMenu_EndClose__);
    byte_4C22CBC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationCommandCardMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PartyOrganizationCommandCardMenu__EndClose(PartyOrganizationCommandCardMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationCommandCardMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void PartyOrganizationCommandCardMenu__EndOpen(PartyOrganizationCommandCardMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationCommandCardMenu__Init(PartyOrganizationCommandCardMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C22CBA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22CBA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)this->fields.compatibilitySprite) == 0) )
  {
    sub_1C2D6EC(titleLabel, method);
  }
  UISprite__set_atlas((UISprite_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationCommandCardMenu__OnClickCancel(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C22CBD & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationCommandCardMenu_OnClickCancel__);
    byte_4C22CBD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationCommandCardMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationCommandCardMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationCommandCardMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationCommandCardMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationCommandCardMenu__Open(
        PartyOrganizationCommandCardMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        PartyOrganizationCommandCardMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  PartyOrganizationListViewItem_o *v9; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v11; // x21
  __int64 v12; // x2
  const MethodInfo *v13; // x7
  struct PartyOrganizationConfirmItemDraw_array *v14; // x8
  UILabel_o *titleLabel; // x20
  UILabel_o *closeLabel; // x20
  UISprite_o *compatibilitySprite; // x20
  System_Action_o *v18; // x20

  if ( (byte_4C22CBB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationCommandCardMenu_EndOpen__);
    sub_1C2D490(&StringLiteral_10103/*"PARTY_ORGANIZATION_COMMAND_CARD_TITLE"*/);
    sub_1C2D490(&StringLiteral_10102/*"PARTY_ORGANIZATION_COMMAND_CARD_CLOSE"*/);
    byte_4C22CBB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (const MethodInfo *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_13;
    v11 = 0;
    while ( (int)v11 < SLODWORD(memberObjectList->max_length) )
    {
      if ( partyItem )
      {
        gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetMember(partyItem, v11, 0);
        v14 = this->fields.memberObjectList;
        if ( v14 )
        {
          if ( (unsigned int)v11 >= LODWORD(v14->max_length) )
            sub_1C2D6F4(gameObject, v9, v12);
          v9 = (PartyOrganizationListViewItem_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)v14->m_Items[v11];
          if ( gameObject )
          {
            PartyOrganizationConfirmItemDraw__SetItem(
              (PartyOrganizationConfirmItemDraw_o *)gameObject,
              v9,
              2,
              0,
              0,
              0,
              0,
              v13);
            memberObjectList = this->fields.memberObjectList;
            ++v11;
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10103/*"PARTY_ORGANIZATION_COMMAND_CARD_TITLE"*/, 0);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10102/*"PARTY_ORGANIZATION_COMMAND_CARD_CLOSE"*/, 0),
          !closeLabel) )
    {
LABEL_13:
      sub_1C2D6EC(gameObject, v9);
    }
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    compatibilitySprite = this->fields.compatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetClassChart_40378484(compatibilitySprite, 0);
    this->fields.state = 1;
    v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyOrganizationCommandCardMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0);
  }
}


void PartyOrganizationCommandCardMenu__add_callbackFunc(
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

  if ( (byte_4C22CB8 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo);
    byte_4C22CB8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationCommandCardMenu_CallbackFunc_c *)v8->klass != PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationCommandCardMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationCommandCardMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationCommandCardMenu__get_closeBtnPath(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22CBE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3073/*"BaseWindow/CloseButton"*/);
    byte_4C22CBE = 1;
  }
  return (System_String_o *)StringLiteral_3073/*"BaseWindow/CloseButton"*/;
}


void PartyOrganizationCommandCardMenu__remove_callbackFunc(
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

  if ( (byte_4C22CB9 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo);
    byte_4C22CB9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationCommandCardMenu_CallbackFunc_c *)v8->klass != PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationCommandCardMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationCommandCardMenu__Init(v11, v12);
}


void PartyOrganizationCommandCardMenu_CallbackFunc___ctor(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6C124;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6C0DC;
}


System_IAsyncResult_o *PartyOrganizationCommandCardMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C22CC0 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22CC0 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PartyOrganizationCommandCardMenu_CallbackFunc__EndInvoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void PartyOrganizationCommandCardMenu_CallbackFunc__Invoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}