void __fastcall MasterMissionReceiveConfirmDialog___ctor(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189CB7 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189CB7 = 1;
  }
  this->fields.state = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmDialog__Init(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  MasterMissionReceiveConfirmListViewManager_o *receiveConfirmListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *subTitleSmallLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20

  if ( (byte_4189CB3 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8640/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/, v3);
    sub_B2C35C(&StringLiteral_8643/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/, v4);
    sub_B2C35C(&StringLiteral_8642/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/, v5);
    sub_B2C35C(&StringLiteral_8641/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/, v6);
    sub_B2C35C(&StringLiteral_8644/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/, v7);
    byte_4189CB3 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  receiveConfirmListViewManager = this->fields.receiveConfirmListViewManager;
  if ( !receiveConfirmListViewManager )
    goto LABEL_13;
  MasterMissionReceiveConfirmListViewManager__DestroyList(receiveConfirmListViewManager, v8);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8644/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/,
                                                                                    0LL);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8642/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/,
                                                                                    0LL);
  if ( !subTitleLabel )
    goto LABEL_13;
  UILabel__set_text(subTitleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleSmallLabel = this->fields.subTitleSmallLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8643/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/,
                                                                                    0LL);
  if ( !subTitleSmallLabel
    || (UILabel__set_text(subTitleSmallLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        cancelLabel = this->fields.cancelLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8640/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/,
                                                                                          0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        decideLabel = this->fields.decideLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8641/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/,
                                                                                          0LL),
        !decideLabel) )
  {
LABEL_13:
    sub_B2C434(receiveConfirmListViewManager, v8);
  }
  UILabel__set_text(decideLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  this->fields.state = 2;
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickCancelButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4189CB4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189CB4 = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickDecideButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4189CB5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189CB5 = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    this->fields.state = 2;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmDialog__Open(
        MasterMissionReceiveConfirmDialog_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *receiveItems,
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmDialog_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  MasterMissionReceiveConfirmListViewManager_o *v15; // x0

  v6 = this;
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, void *, MasterMissionReceiveConfirmDialog_ClickDelegate_o *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    callback,
    method);
  BaseDialog__Open((BaseDialog_o *)v6, 0LL, 0, 0LL);
  v6->fields.clickFunc = callback;
  v6 = (MasterMissionReceiveConfirmDialog_o *)((char *)v6 + 136);
  sub_B2C2F8((BattleServantConfConponent_o *)v6, (System_Int32_array **)callback, v7, v8, v9, v10, v11, v12);
  v15 = *(MasterMissionReceiveConfirmListViewManager_o **)&v6[-1].fields.state;
  LODWORD(v6->monitor) = 0;
  if ( !v15 )
    sub_B2C434(0LL, v13);
  MasterMissionReceiveConfirmListViewManager__CreateList(v15, receiveItems, v14);
}


void __fastcall MasterMissionReceiveConfirmDialog___OnClickCancelButton_b__12_0(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *clickFunc; // x0

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    MasterMissionReceiveConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall MasterMissionReceiveConfirmDialog___OnClickDecideButton_b__13_0(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *clickFunc; // x0

  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
    MasterMissionReceiveConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  ((void (__fastcall *)(MasterMissionReceiveConfirmDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


System_String_o *__fastcall MasterMissionReceiveConfirmDialog__get_closeBtnPath(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189CB6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_4189CB6 = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
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
  sub_B2C2F8(
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
System_IAsyncResult_o *__fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__BeginInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_4185D12 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_4185D12 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__EndInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__Invoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  MasterMissionReceiveConfirmDialog_ClickDelegate_o **v8; // x25
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
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v20; // x8
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
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
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
        (*v19)(v21, isDecide, v19);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}