void WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593629A & 1) == 0 )
  {
    sub_21FFC50(&WarBoardInfoPopupBase_TypeInfo);
    byte_593629A = 1;
  }
  if ( !*(&WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo, method, v2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardConsumedPieceActionPointPopup__Awake(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardConsumedPieceActionPointPopup__ClosePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w8
  System_Action_c *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_5936299 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5936299 = 1;
  }
  this->fields.hideCompleteCallback = 0;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.hideCompleteCallback,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0);
  v18 = (int)v11;
  if ( !v11 )
    goto LABEL_7;
  v19 = System_Action_TypeInfo;
  if ( (System_Action_c *)v11->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v11, (System_Action_c *)v11->klass != v19) )
  {
    sub_220024C(v11, v19, v12, v13);
LABEL_7:
    *p_hideCompleteCallback = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hideCompleteCallback, v18, v12, v13, v14, v15, v16, v17);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v20);
}


void WarBoardConsumedPieceActionPointPopup__Initialize(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_21FFECC(0, v3);
  UISkinSprite__setupSprite(windowBase, 0, 0);
}


void WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_5936298 & 1) == 0 )
  {
    sub_21FFC50(&Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    byte_5936298 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickCallback->fields.invoke_impl)(
        clickCallback->fields.method_code,
        1,
        clickCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardConsumedPieceActionPointPopup__OpenNoticePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_bool__o *clickCallback,
        int32_t consumedPoint,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *consumedPieceList,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *Count; // x0
  const MethodInfo *v17; // x1
  System_Text_StringBuilder_o *v18; // x21
  int32_t i; // w22
  Il2CppObject *Item; // x23
  UILabel_o *consumedLabel; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *closeButtonLabel; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v31; // x20
  float height; // s0
  struct UILabel_o *v33; // x8
  int v34; // w8
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5936297 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_15959/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/);
    sub_21FFC50(&StringLiteral_15960/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/);
    byte_5936297 = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    *(System_String_o **)&consumedPoint,
    (System_String_o *)consumedPieceList,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15960/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0);
  v35 = consumedPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v35);
  Count = System_String__Format(v14, v15, 0);
  if ( !this->fields.messgeLabel )
    goto LABEL_39;
  UILabel__set_text(this->fields.messgeLabel, Count, 0);
  v18 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0);
  if ( !consumedPieceList )
    goto LABEL_39;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                               (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    for ( i = 0; i < (int)Count; ++i )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
               i,
               (const MethodInfo_46F8C4C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( i == (_DWORD)Count - 1 )
      {
        if ( !Item )
          goto LABEL_39;
        Count = (System_String_o *)Item[8].klass;
        if ( !Count )
          goto LABEL_39;
        Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0);
        if ( !v18 )
          goto LABEL_39;
        System_Text_StringBuilder__Append_75521760(v18, Count, 0);
      }
      else
      {
        if ( !Item )
          goto LABEL_39;
        Count = (System_String_o *)Item[8].klass;
        if ( !Count )
          goto LABEL_39;
        Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0);
        if ( !v18 )
          goto LABEL_39;
        System_Text_StringBuilder__AppendLine_75522996(v18, Count, 0);
      }
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_46F8BC0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
    }
  }
  if ( !v18 )
    goto LABEL_39;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v18->klass->vtable._3_ToString.methodPtr)(
                               v18,
                               v18->klass->vtable._3_ToString.method);
  if ( !consumedLabel )
    goto LABEL_39;
  UILabel__set_text(consumedLabel, Count, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15959/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_39;
  UILabel__set_text(closeButtonLabel, Count, 0);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v25, v26);
  NGUITools__UpdateWidgetCollider_56209572(gameObject, 1, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v31 = this->fields.scrollView;
    if ( v31 )
    {
      Count = (System_String_o *)v31->fields.mPanel;
      if ( Count )
      {
        height = UIPanel__get_height((UIPanel_o *)Count, 0);
        v33 = this->fields.consumedLabel;
        if ( v33 )
        {
          Count = (System_String_o *)this->fields.scrollView;
          v34 = height <= (float)v33->fields.mHeight ? 1 : 4;
          v31->fields.contentPivot = v34;
          if ( Count )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)Count, 0);
            goto LABEL_38;
          }
        }
      }
    }
LABEL_39:
    sub_21FFECC(Count, v17);
  }
LABEL_38:
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v17);
}