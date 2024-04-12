void __fastcall WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEB5C & 1) == 0 )
  {
    sub_B52984(&WarBoardInfoPopupBase_TypeInfo);
    byte_42AEB5C = 1;
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

  if ( (byte_42AEB5B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AEB5B = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  sub_B52920(
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
    v17 = (WarBoardConsumedPieceActionPointPopup_o *)sub_B52D50(v10);
    WarBoardConsumedPieceActionPointPopup___ctor(v17, v18);
  }
  else
  {
    this->fields.hideCompleteCallback = (struct System_Action_o *)v10;
    sub_B52920(
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
  __int64 v3; // x1
  UISkinSprite_o *windowBase; // x0

  WarBoardInfoPopupBase__Initialize((WarBoardInfoPopupBase_o *)this, 0LL);
  windowBase = this->fields.windowBase;
  if ( !windowBase )
    sub_B52A5C(0LL, v3);
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_42AEB5A & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEB5A = 1;
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
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_262384C *)Method_System_Action_bool__Invoke__);
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
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *Count; // x0
  __int64 v15; // x1
  System_Text_StringBuilder_o *v16; // x21
  int32_t v17; // w22
  WarBoardPieceData_o *Item; // x24
  int v19; // w23
  UILabel_o *consumedLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v24; // x20
  float height; // s0
  struct UILabel_o *v26; // x8
  int v27; // w8
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42AEB59 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_15339/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/);
    sub_B52984(&StringLiteral_15340/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/);
    byte_42AEB59 = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_B52920(
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15340/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0LL);
  v28 = consumedPoint;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  Count = System_String__Format(v12, v13, 0LL);
  if ( !this->fields.messgeLabel )
    goto LABEL_40;
  UILabel__set_text(this->fields.messgeLabel, Count, 0LL);
  v16 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0LL);
  if ( !consumedPieceList )
    goto LABEL_40;
  Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                               consumedPieceList,
                               (const MethodInfo_2C8DE44 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
  if ( (int)Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Item(
               consumedPieceList,
               v17,
               (const MethodInfo_2C8DEE0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                                   consumedPieceList,
                                   (const MethodInfo_2C8DE44 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v19 = (int)Count;
      Count = (System_String_o *)Item->fields._battleServant_k__BackingField;
      if ( !Count )
        break;
      Count = BattleServantData__getServantShortName((BattleServantData_o *)Count, 0LL);
      if ( !v16 )
        break;
      if ( v17 == v19 - 1 )
        System_Text_StringBuilder__Append_42994048(v16, Count, 0LL);
      else
        System_Text_StringBuilder__AppendLine_42994844(v16, Count, 0LL);
      ++v17;
      Count = (System_String_o *)System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                                   consumedPieceList,
                                   (const MethodInfo_2C8DE44 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( v17 >= (int)Count )
        goto LABEL_17;
    }
LABEL_40:
    sub_B52A5C(Count, v15);
  }
LABEL_17:
  if ( !v16 )
    goto LABEL_40;
  consumedLabel = this->fields.consumedLabel;
  Count = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                               v16,
                               v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !consumedLabel )
    goto LABEL_40;
  UILabel__set_text(consumedLabel, Count, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Count = LocalizationManager__Get((System_String_o *)StringLiteral_15339/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_40;
  UILabel__set_text(closeButtonLabel, Count, 0LL);
  Count = (System_String_o *)this->fields.consumedLabel;
  if ( !Count )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Count, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_46084448(gameObject, 1, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Count = (System_String_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)Count & 1) != 0 )
  {
    v24 = this->fields.scrollView;
    if ( !v24 )
      goto LABEL_40;
    Count = *(System_String_o **)&v24->fields.mPlane.fields.m_Normal.fields.x;
    if ( !Count )
      goto LABEL_40;
    height = UIPanel__get_height((UIPanel_o *)Count, 0LL);
    v26 = this->fields.consumedLabel;
    if ( !v26 )
      goto LABEL_40;
    v27 = height <= (float)v26->fields.mHeight ? 1 : 4;
    HIDWORD(v24->fields.onDragStarted) = v27;
    Count = (System_String_o *)this->fields.scrollView;
    if ( !Count )
      goto LABEL_40;
    UIScrollView__ResetPosition((UIScrollView_o *)Count, 0LL);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, 0LL);
}