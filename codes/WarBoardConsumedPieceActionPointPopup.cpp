void WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2A448 & 1) == 0 )
  {
    sub_1C94098(&WarBoardInfoPopupBase_TypeInfo);
    byte_4D2A448 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4D2A447 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D2A447 = 1;
  }
  this->fields.hideCompleteCallback = 0;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.hideCompleteCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v11 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0);
  v18 = v11;
  if ( !v11 )
    goto LABEL_7;
  v19 = System_Action_TypeInfo;
  if ( (System_Action_c *)v11->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v11, (System_Action_c *)v11->klass != v19) )
  {
    sub_1C9468C(v11);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v18;
  }
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.hideCompleteCallback,
    (int32_t)v18,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_1C942F0(0, v3);
  UISkinSprite__setupSprite(windowBase, 0, 0);
}


void WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4D2A446 & 1) == 0 )
  {
    sub_1C94098(&Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    byte_4D2A446 = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *Count; // x0
  const MethodInfo *v15; // x1
  System_Text_StringBuilder_o *v16; // x21
  int32_t v17; // w22
  Il2CppObject *Item; // x24
  int v19; // w23
  UILabel_o *consumedLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v24; // x20
  float height; // s0
  struct UILabel_o *v26; // x8
  int v27; // w8
  int32_t v28; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2A445 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&StringLiteral_15435/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/);
    sub_1C94098(&StringLiteral_15436/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/);
    byte_4D2A445 = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    consumedPoint,
    (int32_t)consumedPieceList,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15436/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0);
  v28 = consumedPoint;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  Count = System_String__Format(v12, v13, 0);
  if ( !this->fields.messgeLabel )
    goto LABEL_36;
  UILabel__set_text(this->fields.messgeLabel, Count, 0);
  v16 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0);
  if ( !consumedPieceList )
    goto LABEL_36;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                               (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
               v17,
               (const MethodInfo_3A64BC8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v19 = (int)Count;
      Count = (System_String_o *)Item[8].klass;
      if ( !Count )
        break;
      Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0);
      if ( !v16 )
        break;
      if ( v17 == v19 - 1 )
        System_Text_StringBuilder__Append_64501704(v16, Count, 0);
      else
        System_Text_StringBuilder__AppendLine_64502928(v16, Count, 0);
      ++v17;
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_3A64B40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( v17 >= (int)Count )
        goto LABEL_16;
    }
LABEL_36:
    sub_1C942F0(Count, v15);
  }
LABEL_16:
  if ( !v16 )
    goto LABEL_36;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                               v16,
                               v16->klass->vtable._3_ToString.method);
  if ( !consumedLabel )
    goto LABEL_36;
  UILabel__set_text(consumedLabel, Count, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15435/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_36;
  UILabel__set_text(closeButtonLabel, Count, 0);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_50042072(gameObject, 1, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v24 = this->fields.scrollView;
    if ( !v24 )
      goto LABEL_36;
    Count = (System_String_o *)v24->fields.mPanel;
    if ( !Count )
      goto LABEL_36;
    height = UIPanel__get_height((UIPanel_o *)Count, 0);
    v26 = this->fields.consumedLabel;
    if ( !v26 )
      goto LABEL_36;
    v27 = height <= (float)v26->fields.mHeight ? 1 : 4;
    v24->fields.contentPivot = v27;
    Count = (System_String_o *)this->fields.scrollView;
    if ( !Count )
      goto LABEL_36;
    UIScrollView__ResetPosition((UIScrollView_o *)Count, 0);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v15);
}