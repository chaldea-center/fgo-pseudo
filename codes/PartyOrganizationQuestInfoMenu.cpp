void __fastcall PartyOrganizationQuestInfoMenu___ctor(PartyOrganizationQuestInfoMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4184FB4 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4184FB4 = 1;
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
    sub_B2C434(0LL, method);
  PartyOrganizationQuestInfoMenu_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__Close_19905680(
        PartyOrganizationQuestInfoMenu_o *this,
        System_Action_o *onFinishedClose,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4184FB2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, onFinishedClose);
    sub_B2C35C(&Method_PartyOrganizationQuestInfoMenu_EndClose__, v5);
    byte_4184FB2 = 1;
  }
  this->fields.onfinishedClose = onFinishedClose;
  sub_B2C2F8(&this->fields.onfinishedClose, onFinishedClose);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationQuestInfoMenu__Open(
        PartyOrganizationQuestInfoMenu_o *this,
        int32_t questId,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  QuestInformationComponent_o *questInfoWindow; // x21
  System_Action_o *v12; // x22
  System_Action_o *v13; // x23

  if ( (byte_4184FB0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&Method_PartyOrganizationQuestInfoMenu_Close__, v7);
    sub_B2C35C(&Method_PartyOrganizationQuestInfoMenu_Open__, v8);
    byte_4184FB0 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  questInfoWindow = this->fields.questInfoWindow;
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Open__, 0LL);
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_Close__, 0LL);
  if ( !questInfoWindow )
    goto LABEL_9;
  if ( QuestInformationComponent__Setup(questInfoWindow, questId, 2, v12, v13, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.questInfoWindow;
    if ( gameObject )
    {
      QuestInformationComponent__Open((QuestInformationComponent_o *)gameObject, 0LL);
      return;
    }
LABEL_9:
    sub_B2C434(gameObject, v10);
  }
}


void __fastcall PartyOrganizationQuestInfoMenu__Open_19905512(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4184FB1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationQuestInfoMenu_EndOpen__, v3);
    byte_4184FB1 = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyOrganizationQuestInfoMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
}


void __fastcall PartyOrganizationQuestInfoMenu__add_callbackFunc(
        PartyOrganizationQuestInfoMenu_o *this,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationQuestInfoMenu_o *v11; // x0
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4184FAE & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo, value);
    byte_4184FAE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v8->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationQuestInfoMenu_o *)sub_B2C728(v8);
  PartyOrganizationQuestInfoMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationQuestInfoMenu__get_closeBtnPath(
        PartyOrganizationQuestInfoMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184FB3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10981/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/, method);
    byte_4184FB3 = 1;
  }
  return (System_String_o *)StringLiteral_10981/*"QuestInfoWindowPrefab/QuestInfo/BgSp/CloseButton"*/;
}


void __fastcall PartyOrganizationQuestInfoMenu__remove_callbackFunc(
        PartyOrganizationQuestInfoMenu_o *this,
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationQuestInfoMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationQuestInfoMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4184FAF & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo, value);
    byte_4184FAF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationQuestInfoMenu_CallbackFunc_c *)v8->klass != PartyOrganizationQuestInfoMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationQuestInfoMenu_o *)sub_B2C728(v8);
  PartyOrganizationQuestInfoMenu__Init(v11, v12);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4185292 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4185292 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__EndInvoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationQuestInfoMenu_CallbackFunc__Invoke(
        PartyOrganizationQuestInfoMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationQuestInfoMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PartyOrganizationQuestInfoMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationQuestInfoMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}