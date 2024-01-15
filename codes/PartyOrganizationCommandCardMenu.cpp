void __fastcall PartyOrganizationCommandCardMenu___ctor(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FDC14 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_40FDC14 = 1;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B17014(PartyOrganizationConfirmItemDraw___TypeInfo, 3LL, v2);
  this->fields.memberObjectList = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationCommandCardMenu__Callback(
        PartyOrganizationCommandCardMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationCommandCardMenu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationCommandCardMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationCommandCardMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationCommandCardMenu__Close(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationCommandCardMenu__Close_32252472(this, 0LL, v2);
}


void __fastcall PartyOrganizationCommandCardMenu__Close_32252472(
        PartyOrganizationCommandCardMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FDC11 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationCommandCardMenu_EndClose__, v10);
    byte_40FDC11 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationCommandCardMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PartyOrganizationCommandCardMenu__EndClose(
        PartyOrganizationCommandCardMenu_o *this,
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

  PartyOrganizationCommandCardMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
  UILabel_o *closeLabel; // x0
  UISprite_o *compatibilitySprite; // x0

  if ( (byte_40FDC0F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FDC0F = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (compatibilitySprite = this->fields.compatibilitySprite) == 0LL) )
  {
    sub_B170D4();
  }
  UISprite__set_atlas(compatibilitySprite, 0LL, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationCommandCardMenu__OnClickCancel(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FDC12 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDC12 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationCommandCardMenu__Callback(this, 0, v3);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  __int64 v18; // x21
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x7
  struct PartyOrganizationConfirmItemDraw_array *v23; // x8
  PartyOrganizationListViewItem_o *v24; // x1
  PartyOrganizationConfirmItemDraw_o *v25; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v27; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v29; // x0
  UISprite_o *compatibilitySprite; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x20

  if ( (byte_40FDC10 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AtlasManager_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_PartyOrganizationCommandCardMenu_EndOpen__, v13);
    sub_B16FFC(&StringLiteral_10183/*"PARTY_ORGANIZATION_COMMAND_CARD_TITLE"*/, v14);
    sub_B16FFC(&StringLiteral_10182/*"PARTY_ORGANIZATION_COMMAND_CARD_CLOSE"*/, v15);
    byte_40FDC10 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)partyItem,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_13;
    v18 = 0LL;
    while ( (int)v18 < (signed int)memberObjectList->max_length )
    {
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, v18, 0LL);
        v23 = this->fields.memberObjectList;
        if ( v23 )
        {
          if ( (unsigned int)v18 >= v23->max_length )
          {
            sub_B17100(Member, v20, v21);
            sub_B170A0();
          }
          v24 = Member;
          v25 = v23->m_Items[v18];
          if ( v25 )
          {
            PartyOrganizationConfirmItemDraw__SetItem(v25, v24, 2, 0, 0, 0, 0, v22);
            memberObjectList = this->fields.memberObjectList;
            ++v18;
            if ( memberObjectList )
              continue;
          }
        }
      }
      goto LABEL_13;
    }
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_10183/*"PARTY_ORGANIZATION_COMMAND_CARD_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, v27, 0LL),
          closeLabel = this->fields.closeLabel,
          v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10182/*"PARTY_ORGANIZATION_COMMAND_CARD_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_13:
      sub_B170D4();
    }
    UILabel__set_text(closeLabel, v29, 0LL);
    compatibilitySprite = this->fields.compatibilitySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetClassChart_28578080(compatibilitySprite, 0LL);
    this->fields.state = 1;
    v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_PartyOrganizationCommandCardMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
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

  if ( (byte_40FDC0D & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo, value);
    byte_40FDC0D = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationCommandCardMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationCommandCardMenu__get_closeBtnPath(
        PartyOrganizationCommandCardMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FDC13 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2733/*"BaseWindow/CloseButton"*/, method);
    byte_40FDC13 = 1;
  }
  return (System_String_o *)StringLiteral_2733/*"BaseWindow/CloseButton"*/;
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

  if ( (byte_40FDC0E & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationCommandCardMenu_CallbackFunc_TypeInfo, value);
    byte_40FDC0E = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationCommandCardMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationCommandCardMenu_CallbackFunc___ctor(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationCommandCardMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F8371 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8371 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyOrganizationCommandCardMenu_CallbackFunc__EndInvoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationCommandCardMenu_CallbackFunc__Invoke(
        PartyOrganizationCommandCardMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationCommandCardMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationCommandCardMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyOrganizationCommandCardMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationCommandCardMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}