void WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB3F82 & 1) == 0 )
  {
    sub_1C6BA08(&WarBoardInfoPopupBase_TypeInfo);
    byte_4CB3F82 = 1;
  }
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
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
  const MethodInfo *v3; // x3
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Delegate_o *v10; // x8
  System_Action_c *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4CB3F81 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB3F81 = 1;
  }
  this->fields.hideCompleteCallback = 0;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.hideCompleteCallback, 0, (int32_t)method, v3);
  v7 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.hideCompleteCallback,
         (System_Delegate_o *)hideCallback,
         0);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v11) )
  {
    sub_1C6BFFC(v7);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v10;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.hideCompleteCallback, (int32_t)v10, v8, v9);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v12);
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
    sub_1C6BC60(0, v3);
  UISkinSprite__setupSprite(windowBase, 0, 0);
}


void WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4CB3F80 & 1) == 0 )
  {
    sub_1C6BA08(&Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    byte_4CB3F80 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickCallback->fields.invoke_impl)(
        clickCallback->fields.method_code,
        1,
        clickCallback->fields.method);
  }
}


void WarBoardConsumedPieceActionPointPopup__OpenNoticePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_bool__o *clickCallback,
        int32_t consumedPoint,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *consumedPieceList,
        const MethodInfo *method)
{
  System_String_o *v9; // x22
  Il2CppObject *v10; // x0
  System_String_o *Count; // x0
  const MethodInfo *v12; // x1
  System_Text_StringBuilder_o *v13; // x21
  int32_t v14; // w22
  Il2CppObject *Item; // x24
  int v16; // w23
  UILabel_o *consumedLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v21; // x20
  float height; // s0
  struct UILabel_o *v23; // x8
  int v24; // w8
  int32_t v25; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB3F7F & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_15376/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_15377/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/);
    byte_4CB3F7F = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    consumedPoint,
    (const MethodInfo *)consumedPieceList);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15377/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0);
  v25 = consumedPoint;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  Count = System_String__Format(v9, v10, 0);
  if ( !this->fields.messgeLabel )
    goto LABEL_36;
  UILabel__set_text(this->fields.messgeLabel, Count, 0);
  v13 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0);
  if ( !consumedPieceList )
    goto LABEL_36;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                               (const MethodInfo_39F91D0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
               v14,
               (const MethodInfo_39F9258 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_39F91D0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v16 = (int)Count;
      Count = (System_String_o *)Item[8].klass;
      if ( !Count )
        break;
      Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0);
      if ( !v13 )
        break;
      if ( v14 == v16 - 1 )
        System_Text_StringBuilder__Append_64050752(v13, Count, 0);
      else
        System_Text_StringBuilder__AppendLine_64051976(v13, Count, 0);
      ++v14;
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_39F91D0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( v14 >= (int)Count )
        goto LABEL_16;
    }
LABEL_36:
    sub_1C6BC60(Count, v12);
  }
LABEL_16:
  if ( !v13 )
    goto LABEL_36;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                               v13,
                               v13->klass->vtable._3_ToString.method);
  if ( !consumedLabel )
    goto LABEL_36;
  UILabel__set_text(consumedLabel, Count, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15376/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_36;
  UILabel__set_text(closeButtonLabel, Count, 0);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_49650460(gameObject, 1, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v21 = this->fields.scrollView;
    if ( !v21 )
      goto LABEL_36;
    Count = (System_String_o *)v21->fields.mPanel;
    if ( !Count )
      goto LABEL_36;
    height = UIPanel__get_height((UIPanel_o *)Count, 0);
    v23 = this->fields.consumedLabel;
    if ( !v23 )
      goto LABEL_36;
    v24 = height <= (float)v23->fields.mHeight ? 1 : 4;
    v21->fields.contentPivot = v24;
    Count = (System_String_o *)this->fields.scrollView;
    if ( !Count )
      goto LABEL_36;
    UIScrollView__ResetPosition((UIScrollView_o *)Count, 0);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v12);
}