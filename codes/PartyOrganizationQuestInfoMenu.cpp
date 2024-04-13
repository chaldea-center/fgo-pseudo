void __fastcall PartyOrganizationQuestInfoMenu___ctor(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5858 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5858 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__Close(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B5D69C(0LL, method);
  PartyOrganizationQuestInfoMenu_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__Close_19499128(
        PartyOrganizationQuestInfoMenu_o *this,
        System_Action_o *onFinishedClose,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_42E5856 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)onFinishedClose, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationQuestInfoMenu_EndClose__, v6, v7, v8);
    byte_42E5856 = 1;
  }
  this->fields.onfinishedClose = onFinishedClose;
  sub_B5D560(&this->fields.onfinishedClose);
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__EndClose(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onfinishedClose, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__EndOpen(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationQuestInfoMenu__Init(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__Open(
        PartyOrganizationQuestInfoMenu_o *this,
        int32_t questId,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  QuestInformationComponent_o *questInfoWindow; // x21
  System_Action_o *v16; // x22
  System_Action_o *v17; // x23

  if ( (byte_42E5854 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, questId, (_DWORD)callback, method);
    sub_B5D5C4(&Method_PartyOrganizationQuestInfoMenu_Close__, v7, v8, v9);
    sub_B5D5C4(&Method_PartyOrganizationQuestInfoMenu_Open__, v10, v11, v12);
    byte_42E5854 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B5D560(&this->fields.callbackFunc);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  questInfoWindow = this->fields.questInfoWindow;
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Open__, 0LL);
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Close__, 0LL);
  if ( !questInfoWindow )
    goto LABEL_9;
  if ( QuestInformationComponent__Setup(questInfoWindow, questId, 2, v16, v17, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.questInfoWindow;
    if ( gameObject )
    {
      QuestInformationComponent__Open((QuestInformationComponent_o *)gameObject, 0LL);
      return;
    }
LABEL_9:
    sub_B5D69C(gameObject, v14);
  }
}


void __fastcall PartyOrganizationQuestInfoMenu__Open_19498960(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E5855 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyOrganizationQuestInfoMenu_EndOpen__, v5, v6, v7);
    byte_42E5855 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__add_callbackFunc(
        PartyOrganizationQuestInfoMenu_o *this,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationQuestInfoMenu_o *v12; // x0
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E5852 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5852 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v9->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationQuestInfoMenu_o *)sub_B5D990(v9);
  PartyOrganizationQuestInfoMenu__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall PartyOrganizationQuestInfoMenu__get_closeBtnPath(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5857 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11113/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E5857 = 1;
  }
  return (System_String_o *)StringLiteral_11113/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/;
}


void __fastcall PartyOrganizationQuestInfoMenu__remove_callbackFunc(
        PartyOrganizationQuestInfoMenu_o *this,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationQuestInfoMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E5853 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E5853 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v9->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PartyOrganizationQuestInfoMenu_o *)sub_B5D990(v9);
  PartyOrganizationQuestInfoMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc___ctor(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42E5A8A & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A8A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__EndInvoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__Invoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationQuestInfoMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationQuestInfoMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}