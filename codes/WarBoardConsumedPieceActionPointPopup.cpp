void __fastcall WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FA37F & 1) == 0 )
  {
    sub_1B640C8(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_49FA37F = 1;
  }
  if ( !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__Awake(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardConsumedPieceActionPointPopup__ClosePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_o *hideCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_o **p_hideCompleteCallback; // x20
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Delegate_o *v10; // x8
  System_Action_c *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_49FA37E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, hideCallback);
    byte_49FA37E = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hideCompleteCallback, 0, (int32_t)method, v3);
  v7 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.hideCompleteCallback,
         (System_Delegate_o *)hideCallback,
         0LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (*p_hideCompleteCallback = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v11) )
  {
    sub_1B645E4(v7);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v10;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hideCompleteCallback, (int32_t)v10, v8, v9);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v12);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__Initialize(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1B64324(0LL);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_49FA37D & 1) == 0 )
  {
    sub_1B640C8(&Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__, method);
    byte_49FA37D = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickCallback->fields.m_target)(
        clickCallback->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickCallback->fields.extra_arg);
  }
}


void __fastcall WarBoardConsumedPieceActionPointPopup__OpenNoticePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_bool__o *clickCallback,
        int32_t consumedPoint,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *consumedPieceList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x22
  Il2CppObject *v18; // x0
  System_String_o *Count; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Text_StringBuilder_o *v22; // x21
  int32_t v23; // w22
  Il2CppObject *Item; // x24
  int v25; // w23
  UILabel_o *consumedLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v30; // x1
  struct UIScrollView_o *v31; // x20
  float height; // s0
  struct UILabel_o *v33; // x8
  int v34; // w8
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FA37C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, clickCallback);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&NGUITools_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__, v13);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_15323/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, v15);
    sub_1B640C8(&StringLiteral_15324/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, v16);
    byte_49FA37C = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    consumedPoint,
    (int32_t)consumedPieceList);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15324/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0LL);
  v35 = consumedPoint;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  Count = System_String__Format(v17, v18, 0LL);
  if ( !this->fields.messgeLabel )
    goto LABEL_36;
  UILabel__set_text(this->fields.messgeLabel, Count, 0LL);
  v22 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v20, v21);
  System_Text_StringBuilder___ctor(v22, 0LL);
  if ( !consumedPieceList )
    goto LABEL_36;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                               (const MethodInfo_366EC3C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
               v23,
               (const MethodInfo_366ECC4 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_366EC3C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v25 = (int)Count;
      Count = (System_String_o *)Item[8].klass;
      if ( !Count )
        break;
      Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0LL);
      if ( !v22 )
        break;
      if ( v23 == v25 - 1 )
        System_Text_StringBuilder__Append_60536548(v22, Count, 0LL);
      else
        System_Text_StringBuilder__AppendLine_60537772(v22, Count, 0LL);
      ++v23;
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_366EC3C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( v23 >= (int)Count )
        goto LABEL_16;
    }
LABEL_36:
    sub_1B64324(Count);
  }
LABEL_16:
  if ( !v22 )
    goto LABEL_36;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v22->klass->vtable._3_ToString.method)(
                               v22,
                               v22->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !consumedLabel )
    goto LABEL_36;
  UILabel__set_text(consumedLabel, Count, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15323/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_36;
  UILabel__set_text(closeButtonLabel, Count, 0LL);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_46583140(gameObject, 1, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v31 = this->fields.scrollView;
    if ( !v31 )
      goto LABEL_36;
    Count = (System_String_o *)v31->fields.mPanel;
    if ( !Count )
      goto LABEL_36;
    height = UIPanel__get_height((UIPanel_o *)Count, 0LL);
    v33 = this->fields.consumedLabel;
    if ( !v33 )
      goto LABEL_36;
    v34 = height <= (float)v33->fields.mHeight ? 1 : 4;
    v31->fields.contentPivot = v34;
    Count = (System_String_o *)this->fields.scrollView;
    if ( !Count )
      goto LABEL_36;
    UIScrollView__ResetPosition((UIScrollView_o *)Count, 0LL);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v30);
}