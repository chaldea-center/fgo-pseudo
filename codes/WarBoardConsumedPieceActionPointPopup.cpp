void __fastcall WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  if ( (byte_42133E0 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_42133E0 = 1;
  }
  if ( (BYTE3(WarBoardInfoPopupBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardInfoPopupBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardInfoPopupBase_TypeInfo);
  }
  WarBoardInfoPopupBase___ctor((WarBoardInfoPopupBase_o *)this, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Delegate_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardConsumedPieceActionPointPopup_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_42133DF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, hideCallback);
    byte_42133DF = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.hideCompleteCallback,
          (System_Delegate_o *)hideCallback,
          0LL);
  if ( v10 && (System_Action_c *)v10->klass != System_Action_TypeInfo )
  {
    v17 = (WarBoardConsumedPieceActionPointPopup_o *)sub_B0DC70(v10);
    WarBoardConsumedPieceActionPointPopup___ctor(v17, v18);
  }
  else
  {
    this->fields.hideCompleteCallback = (struct System_Action_o *)v10;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.hideCompleteCallback,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    WarBoardInfoPopupBase__Hide((WarBoardInfoPopupBase_o *)this, 0LL);
  }
}


void __fastcall WarBoardConsumedPieceActionPointPopup__Initialize(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, 0LL);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_B0D97C(0LL);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_42133DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42133DE = 1;
  }
  if ( WarBoardInfoPopupBase__get_isShown((WarBoardInfoPopupBase_o *)this, 0LL)
    && !WarBoardInfoPopupBase__get_isAnimating((WarBoardInfoPopupBase_o *)this, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    clickCallback = this->fields.clickCallback;
    if ( clickCallback )
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_246AB08 *)Method_System_Action_bool__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConsumedPieceActionPointPopup__OpenNoticePopup(
        WarBoardConsumedPieceActionPointPopup_o *this,
        System_Action_bool__o *clickCallback,
        int32_t consumedPoint,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *consumedPieceList,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *Count; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_Text_StringBuilder_o *v25; // x21
  int32_t v26; // w22
  WarBoardPieceData_o *Item; // x24
  int v28; // w23
  UILabel_o *consumedLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v33; // x20
  float height; // s0
  struct UILabel_o *v35; // x8
  int v36; // w8
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42133DD & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, clickCallback);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&NGUITools_TypeInfo, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__, v16);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_15286/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, v18);
    sub_B0D8A4(&StringLiteral_15287/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, v19);
    byte_42133DD = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.clickCallback,
    (System_Int32_array **)clickCallback,
    *(System_String_array ***)&consumedPoint,
    (System_String_array **)consumedPieceList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15287/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0LL);
  v37 = consumedPoint;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  Count = System_String__Format(v20, v21, 0LL);
  if ( !this->fields.messgeLabel )
    goto LABEL_40;
  UILabel__set_text(this->fields.messgeLabel, Count, 0LL);
  v25 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v23, v24);
  System_Text_StringBuilder___ctor(v25, 0LL);
  if ( !consumedPieceList )
    goto LABEL_40;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                               consumedPieceList,
                               (const MethodInfo_2C53E00 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Item(
               consumedPieceList,
               v26,
               (const MethodInfo_2C53E9C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                                   consumedPieceList,
                                   (const MethodInfo_2C53E00 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v28 = (int)Count;
      Count = (System_String_o *)Item->fields._battleServant_k__BackingField;
      if ( !Count )
        break;
      Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0LL);
      if ( !v25 )
        break;
      if ( v26 == v28 - 1 )
        System_Text_StringBuilder__Append_42155400(v25, Count, 0LL);
      else
        System_Text_StringBuilder__AppendLine_42156196(v25, Count, 0LL);
      ++v26;
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                                   consumedPieceList,
                                   (const MethodInfo_2C53E00 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( v26 >= (int)Count )
        goto LABEL_17;
    }
LABEL_40:
    sub_B0D97C(Count);
  }
LABEL_17:
  if ( !v25 )
    goto LABEL_40;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v25->klass->vtable._3_ToString.method)(
                               v25,
                               v25->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !consumedLabel )
    goto LABEL_40;
  UILabel__set_text(consumedLabel, Count, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15286/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_40;
  UILabel__set_text(closeButtonLabel, Count, 0LL);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_45602044(gameObject, 1, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v33 = this->fields.scrollView;
    if ( !v33 )
      goto LABEL_40;
    Count = *(System_String_o **)&v33->fields.mPlane.fields.m_Normal.fields.x;
    if ( !Count )
      goto LABEL_40;
    height = UIPanel__get_height((UIPanel_o *)Count, 0LL);
    v35 = this->fields.consumedLabel;
    if ( !v35 )
      goto LABEL_40;
    v36 = height <= (float)v35->fields.mHeight ? 1 : 4;
    HIDWORD(v33->fields.onDragStarted) = v36;
    Count = (System_String_o *)this->fields.scrollView;
    if ( !Count )
      goto LABEL_40;
    UIScrollView__ResetPosition((UIScrollView_o *)Count, 0LL);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, 0LL);
}