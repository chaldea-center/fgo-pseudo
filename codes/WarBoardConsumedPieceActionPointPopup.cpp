void __fastcall WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5913D & 1) == 0 )
  {
    sub_1B885B0(&WarBoardInfoPopupBase_TypeInfo);
    byte_4A5913D = 1;
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

  if ( (byte_4A5913C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5913C = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  p_hideCompleteCallback = &this->fields.hideCompleteCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hideCompleteCallback, 0, (int32_t)method, v3);
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
    sub_1B88ACC(v7);
LABEL_7:
    *p_hideCompleteCallback = (struct System_Action_o *)v10;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hideCompleteCallback, (int32_t)v10, v8, v9);
  WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, v12);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__Initialize(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, method);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_1B8880C(0LL, v3);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_bool__o *clickCallback; // x8

  if ( (byte_4A5913B & 1) == 0 )
  {
    sub_1B885B0(&Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    byte_4A5913B = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, method)
    && !this->fields._isShowAnimating_k__BackingField
    && !this->fields._isHideAnimating_k__BackingField )
  {
    v3 = Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__;
    if ( (*((_BYTE *)Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WarBoardConsumedPieceActionPointPopup_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  System_String_o *v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
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

  if ( (byte_4A5913A & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_15391/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/);
    sub_1B885B0(&StringLiteral_15392/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/);
    byte_4A5913A = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.clickCallback,
    (int32_t)clickCallback,
    consumedPoint,
    (int32_t)consumedPieceList);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15392/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0LL);
  v28 = consumedPoint;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v10, v11, v12);
  Count = System_String__Format(v9, v13, 0LL);
  if ( !this->fields.messgeLabel )
    goto LABEL_36;
  UILabel__set_text(this->fields.messgeLabel, Count, 0LL);
  v16 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0LL);
  if ( !consumedPieceList )
    goto LABEL_36;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                               (const MethodInfo_36E6A20 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item(
               (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
               v17,
               (const MethodInfo_36E6AA8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_36E6A20 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v19 = (int)Count;
      Count = (System_String_o *)Item[8].klass;
      if ( !Count )
        break;
      Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0LL);
      if ( !v16 )
        break;
      if ( v17 == v19 - 1 )
        System_Text_StringBuilder__Append_60868928(v16, Count, 0LL);
      else
        System_Text_StringBuilder__AppendLine_60870152(v16, Count, 0LL);
      ++v17;
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count(
                                   (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)consumedPieceList,
                                   (const MethodInfo_36E6A20 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( v17 >= (int)Count )
        goto LABEL_16;
    }
LABEL_36:
    sub_1B8880C(Count, v15);
  }
LABEL_16:
  if ( !v16 )
    goto LABEL_36;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                               v16,
                               v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !consumedLabel )
    goto LABEL_36;
  UILabel__set_text(consumedLabel, Count, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15391/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_36;
  UILabel__set_text(closeButtonLabel, Count, 0LL);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_46861332(gameObject, 1, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v24 = this->fields.scrollView;
    if ( !v24 )
      goto LABEL_36;
    Count = (System_String_o *)v24->fields.mPanel;
    if ( !Count )
      goto LABEL_36;
    height = UIPanel__get_height((UIPanel_o *)Count, 0LL);
    v26 = this->fields.consumedLabel;
    if ( !v26 )
      goto LABEL_36;
    v27 = height <= (float)v26->fields.mHeight ? 1 : 4;
    v24->fields.contentPivot = v27;
    Count = (System_String_o *)this->fields.scrollView;
    if ( !Count )
      goto LABEL_36;
    UIScrollView__ResetPosition((UIScrollView_o *)Count, 0LL);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, v15);
}