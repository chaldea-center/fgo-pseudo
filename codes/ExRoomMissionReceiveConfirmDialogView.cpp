void ExRoomMissionReceiveConfirmDialogView___ctor(
        ExRoomMissionReceiveConfirmDialogView_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932E2C & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932E2C = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ExRoomMissionReceiveConfirmDialogView__Awake(
        ExRoomMissionReceiveConfirmDialogView_o *this,
        const MethodInfo *method)
{
  ;
}


void ExRoomMissionReceiveConfirmDialogView__Close(
        ExRoomMissionReceiveConfirmDialogView_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Action_bool__o *closedCallback; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Action_o *v27; // x21

  if ( (byte_5932E2B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0__Close_b__0__);
    sub_21FFC50(&ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_TypeInfo);
    byte_5932E2B = 1;
  }
  v5 = sub_21FFEBC(ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 32) = isDecide;
  closedCallback = this->fields.closedCallback;
  *(_QWORD *)(v5 + 24) = closedCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)closedCallback, v15, v16, v17, v18, v19, v20);
  this->fields.closedCallback = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closedCallback, 0, v21, v22, v23, v24, v25, v26);
  v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0__Close_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v27, 0);
}


void ExRoomMissionReceiveConfirmDialogView__OnClickCancel(
        ExRoomMissionReceiveConfirmDialogView_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5932E2A & 1) == 0 )
  {
    sub_21FFC50(&Method_ExRoomMissionReceiveConfirmDialogView_OnClickCancel__);
    byte_5932E2A = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_ExRoomMissionReceiveConfirmDialogView_OnClickCancel__;
    if ( (*((_BYTE *)Method_ExRoomMissionReceiveConfirmDialogView_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ExRoomMissionReceiveConfirmDialogView_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ExRoomMissionReceiveConfirmDialogView__Close(this, 0, v5);
  }
}


void ExRoomMissionReceiveConfirmDialogView__OnClickDecide(
        ExRoomMissionReceiveConfirmDialogView_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5932E29 & 1) == 0 )
  {
    sub_21FFC50(&Method_ExRoomMissionReceiveConfirmDialogView_OnClickDecide__);
    byte_5932E29 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_ExRoomMissionReceiveConfirmDialogView_OnClickDecide__;
    if ( (*((_BYTE *)Method_ExRoomMissionReceiveConfirmDialogView_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ExRoomMissionReceiveConfirmDialogView_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    ExRoomMissionReceiveConfirmDialogView__Close(this, 1, v5);
  }
}


void ExRoomMissionReceiveConfirmDialogView__Open(
        ExRoomMissionReceiveConfirmDialogView_o *this,
        ExRoomMissionReceiveConfirmDialog_o *dialog,
        System_Action_bool__o *onClosed,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *confirmListViewManager; // x21
  struct System_Collections_Generic_List_ExRoomMissionReceiveConfirmDialogItem__o *Items_k__BackingField; // x1
  ExRoomMissionReceiveConfirmListViewManager_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_5932E28 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E28 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closedCallback = onClosed;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closedCallback,
    (int32_t)onClosed,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  confirmListViewManager = (UnityEngine_Object_o *)this->fields.confirmListViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(confirmListViewManager, 0, 0) )
  {
    v17 = this->fields.confirmListViewManager;
    if ( v17 )
    {
      ExRoomMissionReceiveConfirmListViewManager__DestroyList(v17, (const MethodInfo *)Items_k__BackingField);
      v17 = this->fields.confirmListViewManager;
      if ( dialog )
      {
        Items_k__BackingField = dialog->fields._Items_k__BackingField;
        if ( v17 )
        {
LABEL_9:
          ExRoomMissionReceiveConfirmListViewManager__CreateList(v17, Items_k__BackingField, v18);
          goto LABEL_10;
        }
      }
      else
      {
        Items_k__BackingField = 0;
        if ( v17 )
          goto LABEL_9;
      }
    }
    sub_21FFECC(v17, Items_k__BackingField);
  }
LABEL_10:
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0___ctor(
        ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0___Close_b__0(
        ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_o *v3; // x19
  struct ExRoomMissionReceiveConfirmDialogView_o *_4__this; // x8
  UnityEngine_Object_o *confirmListViewManager; // x20
  struct ExRoomMissionReceiveConfirmDialogView_o *v6; // x8

  v3 = this;
  if ( (byte_5932E2D & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    this = (ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E2D = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  confirmListViewManager = (UnityEngine_Object_o *)_4__this->fields.confirmListViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_o *)UnityEngine_Object__op_Inequality(
                                                                           confirmListViewManager,
                                                                           0,
                                                                           0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.__4__this;
    if ( v6 )
    {
      this = (ExRoomMissionReceiveConfirmDialogView___c__DisplayClass6_0_o *)v6->fields.confirmListViewManager;
      if ( this )
      {
        ExRoomMissionReceiveConfirmListViewManager__DestroyList(
          (ExRoomMissionReceiveConfirmListViewManager_o *)this,
          method);
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_21FFECC(this, method);
  }
LABEL_10:
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v3->fields.callback,
    v3->fields.isDecide,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
}