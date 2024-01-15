void __fastcall WarBoardConsumedPieceActionPointPopup___ctor(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F897D & 1) == 0 )
  {
    sub_B16FFC(&WarBoardInfoPopupBase_TypeInfo, method);
    byte_40F897D = 1;
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

  if ( (byte_40F897C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, hideCallback);
    byte_40F897C = 1;
  }
  this->fields.hideCompleteCallback = 0LL;
  sub_B16F98(
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
    v17 = (WarBoardConsumedPieceActionPointPopup_o *)sub_B173C8(v10);
    WarBoardConsumedPieceActionPointPopup___ctor(v17, v18);
  }
  else
  {
    this->fields.hideCompleteCallback = (struct System_Action_o *)v10;
    sub_B16F98(
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
    sub_B170D4();
  UISkinSprite__setupSprite(windowBase, 0LL);
}


void __fastcall WarBoardConsumedPieceActionPointPopup__OnClickClose(
        WarBoardConsumedPieceActionPointPopup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_bool__o *clickCallback; // x0

  if ( (byte_40F897B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F897B = 1;
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
      System_Action_bool___Invoke(clickCallback, 1, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
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
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Text_StringBuilder_o *v27; // x21
  int32_t v28; // w22
  WarBoardPieceData_o *Item; // x24
  int32_t Count; // w0
  int32_t v31; // w23
  BattleServantData_o *battleServant_k__BackingField; // x0
  System_String_o *ServantShortName; // x0
  UILabel_o *consumedLabel; // x20
  System_String_o *v35; // x0
  UILabel_o *closeButtonLabel; // x20
  System_String_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v41; // x20
  UIPanel_o *v42; // x0
  float height; // s0
  struct UILabel_o *v44; // x8
  int v45; // w8
  UIScrollView_o *v46; // x0
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F897A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, clickCallback);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&NGUITools_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__, v16);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_15179/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, v18);
    sub_B16FFC(&StringLiteral_15180/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, v19);
    byte_40F897A = 1;
  }
  this->fields.clickCallback = clickCallback;
  sub_B16F98(
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
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15180/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_MESSAGE"*/, 0LL);
  v47 = consumedPoint;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v22 = System_String__Format(v20, v21, 0LL);
  if ( !this->fields.messgeLabel )
    goto LABEL_40;
  UILabel__set_text(this->fields.messgeLabel, v22, 0LL);
  v27 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v23, v24, v25, v26);
  System_Text_StringBuilder___ctor(v27, 0LL);
  if ( !consumedPieceList )
    goto LABEL_40;
  if ( System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
         consumedPieceList,
         (const MethodInfo_2BEB1A0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__) >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Item(
               consumedPieceList,
               v28,
               (const MethodInfo_2BEB23C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Item__);
      Count = System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                consumedPieceList,
                (const MethodInfo_2BEB1A0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__);
      if ( !Item )
        break;
      v31 = Count;
      battleServant_k__BackingField = Item->fields._battleServant_k__BackingField;
      if ( !battleServant_k__BackingField )
        break;
      ServantShortName = BattleServantData__getServantShortName(battleServant_k__BackingField, 0LL);
      if ( !v27 )
        break;
      if ( v28 == v31 - 1 )
        System_Text_StringBuilder__Append_41914240(v27, ServantShortName, 0LL);
      else
        System_Text_StringBuilder__AppendLine_41915036(v27, ServantShortName, 0LL);
      if ( ++v28 >= System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData___get_Count(
                      consumedPieceList,
                      (const MethodInfo_2BEB1A0 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__get_Count__) )
        goto LABEL_17;
    }
LABEL_40:
    sub_B170D4();
  }
LABEL_17:
  if ( !v27 )
    goto LABEL_40;
  consumedLabel = this->fields.consumedLabel;
  v35 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v27->klass->vtable._3_ToString.method)(
                             v27,
                             v27->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !consumedLabel )
    goto LABEL_40;
  UILabel__set_text(consumedLabel, v35, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15179/*"WARBOARD_CONSUMED_PIECE_ACTION_POINT_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_40;
  UILabel__set_text(closeButtonLabel, v37, 0LL);
  v38 = (UnityEngine_Component_o *)this->fields.consumedLabel;
  if ( !v38 )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject(v38, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_45680548(gameObject, 1, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v41 = this->fields.scrollView;
    if ( !v41 )
      goto LABEL_40;
    v42 = *(UIPanel_o **)&v41->fields.mPlane.fields.m_Normal.fields.x;
    if ( !v42 )
      goto LABEL_40;
    height = UIPanel__get_height(v42, 0LL);
    v44 = this->fields.consumedLabel;
    if ( !v44 )
      goto LABEL_40;
    v45 = height <= (float)v44->fields.mHeight ? 1 : 4;
    HIDWORD(v41->fields.onDragStarted) = v45;
    v46 = this->fields.scrollView;
    if ( !v46 )
      goto LABEL_40;
    UIScrollView__ResetPosition(v46, 0LL);
  }
  WarBoardInfoPopupBase__Show((WarBoardInfoPopupBase_o *)this, 0LL);
}