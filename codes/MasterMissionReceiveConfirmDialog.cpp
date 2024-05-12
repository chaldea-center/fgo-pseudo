void __fastcall MasterMissionReceiveConfirmDialog___ctor(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438BB70 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438BB70 = 1;
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
  const MethodInfo *v3; // x1
  MasterMissionReceiveConfirmListViewManager_o *receiveConfirmListViewManager; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *subTitleSmallLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20

  if ( (byte_438BB6C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8798/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_8801/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/);
    sub_B775C4(&StringLiteral_8800/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/);
    sub_B775C4(&StringLiteral_8799/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_8802/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/);
    byte_438BB6C = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  receiveConfirmListViewManager = this->fields.receiveConfirmListViewManager;
  if ( !receiveConfirmListViewManager )
    goto LABEL_13;
  MasterMissionReceiveConfirmListViewManager__DestroyList(receiveConfirmListViewManager, v3);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8802/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_TITLE"*/,
                                                                                    0LL);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8800/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_MSG"*/,
                                                                                    0LL);
  if ( !subTitleLabel )
    goto LABEL_13;
  UILabel__set_text(subTitleLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  subTitleSmallLabel = this->fields.subTitleSmallLabel;
  receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_8801/*"MASTER_MISSION_RECEIVE_CONFIRM_DLG_SUB_MSG"*/,
                                                                                    0LL);
  if ( !subTitleSmallLabel
    || (UILabel__set_text(subTitleSmallLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        cancelLabel = this->fields.cancelLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8798/*"MASTER_MISSION_RECEIVE_CONFIRM_CANCEL"*/,
                                                                                          0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)receiveConfirmListViewManager, 0LL),
        decideLabel = this->fields.decideLabel,
        receiveConfirmListViewManager = (MasterMissionReceiveConfirmListViewManager_o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_8799/*"MASTER_MISSION_RECEIVE_CONFIRM_DECIDE"*/,
                                                                                          0LL),
        !decideLabel) )
  {
LABEL_13:
    sub_B7769C(receiveConfirmListViewManager, v3);
  }
  UILabel__set_text(decideLabel, (System_String_o *)receiveConfirmListViewManager, 0LL);
  this->fields.state = 2;
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickCancelButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438BB6D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BB6D = 1;
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
    v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickCancelButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmDialog__OnClickDecideButton(
        MasterMissionReceiveConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438BB6E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BB6E = 1;
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
    v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_MasterMissionReceiveConfirmDialog__OnClickDecideButton_b__13_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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
  sub_B77560((BattleServantConfConponent_o *)v6, (System_Int32_array **)callback, v7, v8, v9, v10, v11, v12);
  v15 = *(MasterMissionReceiveConfirmListViewManager_o **)&v6[-1].fields.state;
  LODWORD(v6->monitor) = 0;
  if ( !v15 )
    sub_B7769C(0LL, v13);
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
  if ( (byte_438BB6F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15768/*"Window/CancelButton"*/);
    byte_438BB6F = 1;
  }
  return (System_String_o *)StringLiteral_15768/*"Window/CancelButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
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
  sub_B77560(p_method);
}


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
  if ( (byte_43889BC & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43889BC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__EndInvoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmDialog_ClickDelegate__Invoke(
        MasterMissionReceiveConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  MasterMissionReceiveConfirmDialog_ClickDelegate_o **v7; // x25
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
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v18; // x8
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
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isDecide, v17);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}